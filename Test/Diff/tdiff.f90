
program tdiff

  use der
  implicit none

  integer                          :: nx,ny
  real,dimension(:,:), allocatable :: x 
  real,dimension(:,:), allocatable :: y 
  integer                          :: niter    
  integer                          :: i,j,k
  type(diff)                       :: df    
  integer                          :: l
  real                             :: dx
  integer                          :: rval

  INTEGER :: scount, ecount,rate,err
  real    :: t


  l=8
  df = DiffNew(df,l)

  nx = 4096
  ny = 4096
  allocate(x(nx,ny))
  allocate(y(nx,ny))

  do i=1,nx
    do j=1,ny
      x(i,j) = 1.0
      y(i,j) = 0.0
    enddo
  enddo

  niter = 1000
  dx=1.0
  call system_clock(scount,rate)
  do i=1,niter
    y(0,0)=0.0
    rval=DiffDxminus(df%w,x,y,dx)
  enddo
  call system_clock(ecount)
 t = real(ecount-scount,8)/real(rate,8)
 print *, '**Fortran version:'
 print *, 'time: ', t

  print *, 'y(1,1): ', y(1,1)

end program tdiff
