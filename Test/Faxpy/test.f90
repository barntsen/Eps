program test
  use faxpy
  implicit none

  integer      :: nx,ny
  integer      :: i,j,k
  integer      :: niter 
  real         :: b
  real,dimension(:,:), allocatable  :: x 
  real,dimension(:,:), allocatable  :: y 
  real,dimension(:,:), allocatable  :: a 

  nx = 2000
  ny = 2000
  allocate(x(nx,ny))
  allocate(y(nx,ny))
  allocate(a(nx,ny))

  do i=0,nx
    do j=0,ny
      x(i,j) = 1.0
      y(i,j) = 1.0
    enddo
  enddo

  ! Perform the vector addition 1000 times
  niter = 1000

  do i=0,niter 
    b=i
    call faxpy2d(a,x,y,b)
  enddo

end program
