program tfaxpy2d
  use faxpy
  implicit none

  integer      :: nx,ny
  integer      :: i,j,k
  integer      :: niter 
  real         :: b
  real,dimension(:,:), allocatable  :: x 
  real,dimension(:,:), allocatable  :: y 
  real,dimension(:,:), allocatable  :: a 

  INTEGER :: scount, ecount,rate,err 
  real    :: t

  !This crashes
  nx = 8000
  ny = 8000

  !This runs ok
  !nx = 6000
  !ny = 6000

  allocate(x(nx,ny),stat=err)
  allocate(y(nx,ny),stat=err)
  allocate(a(nx,ny),stat=err)

  do i=1,nx
    do j=1,ny
      x(i,j) = 1.0
      y(i,j) = 1.0
    enddo
  enddo

  ! Perform the vector addition 1000 times
  niter = 1000

  call system_clock(scount,rate)
  do i=0,niter 
    b=1.0
    call faxpy2d(a,x,y,b)
  enddo
 call system_clock(ecount)
 t = real(ecount-scount,8)/real(rate,8)
 print *, '**Fortran version:'
 print *, 'Time: ', t

 print *, 'result: ', a(1,1)

end program tfaxpy2d
