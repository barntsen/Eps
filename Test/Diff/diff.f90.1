module der
  implicit none

  type :: diff 
   integer  :: l                             
   integer  :: lmax                           
   real,dimension(:,:),allocatable  :: coeffs
   real,dimension(:)  ,allocatable  ::  w
  end type

contains

  type(diff) function DiffNew( Ddiff,l) 
    type(diff) :: Ddiff
    integer    :: l
    integer    :: i,j,k

    Ddiff%l = l;
    Ddiff%lmax = 8;

    if(Ddiff%l < 1) then
      Ddiff%l=1
    end if
    if(Ddiff%l > Ddiff%lmax) then
      Ddiff%l=Ddiff%lmax;
    end if

    allocate(Ddiff%coeffs(Ddiff%lmax,Ddiff%lmax))
    allocate(Ddiff%w(l));

    ! Load coefficients
    do i=1, Ddiff%lmax
      do j=1, Ddiff%lmax
        Ddiff%coeffs(i,j) = 0.0
      enddo
    enddo

    ! l=1
    Ddiff%coeffs(0+1,0+1) = 1.0021;

    ! l=2
    Ddiff%coeffs(1+1,0+1) = 1.1452;
    Ddiff%coeffs(1+1,1+1) = -0.0492;
  
    ! l=3
    Ddiff%coeffs(2+1,0+1) = 1.2036;
    Ddiff%coeffs(2+1,1+1) = -0.0833;
    Ddiff%coeffs(2+1,2+1) = 0.0097;

    ! l=4
    Ddiff%coeffs(3+1,0+1) = 1.2316;
    Ddiff%coeffs(3+1,1+1) = -0.1041;
    Ddiff%coeffs(3+1,2+1) = 0.0206;
    Ddiff%coeffs(3+1,3+1) = -0.0035;

    ! l=5
    Ddiff%coeffs(4+1,0+1) = 1.2463;
    Ddiff%coeffs(4+1,1+1) = -0.1163;
    Ddiff%coeffs(4+1,2+1) = 0.0290;
    Ddiff%coeffs(4+1,3+1) = -0.0080;
    Ddiff%coeffs(4+1,4+2) = 0.0018;

    ! l=6
    Ddiff%coeffs(5+1,0+1) = 1.2542;
    Ddiff%coeffs(5+1,1+1) = -0.1213;
    Ddiff%coeffs(5+1,2+1) = 0.0344;
    Ddiff%coeffs(5+1,3+1) = -0.017;
    Ddiff%coeffs(5+1,4+1) = 0.0038;
    Ddiff%coeffs(5+1,5+1) = -0.0011;

    ! l=7
    Ddiff%coeffs(6+1,0+1) = 1.2593;
    Ddiff%coeffs(6+1,1+1) = -0.1280;
    Ddiff%coeffs(6+1,2+1) = 0.0384;
    Ddiff%coeffs(6+1,3+1) = -0.0147;
    Ddiff%coeffs(6+1,4+1) = 0.0059;
    Ddiff%coeffs(6+1,5+1) = -0.0022;
    Ddiff%coeffs(6+1,6+1) = 0.0007;

    ! l=8
    Ddiff%coeffs(7+1,0+1) = 1.2626;
    Ddiff%coeffs(7+1,1+1) = -0.1312;
    Ddiff%coeffs(7+1,2+1) = 0.0412;
    Ddiff%coeffs(7+1,3+1) = -0.0170;
    Ddiff%coeffs(7+1,4+1) = 0.0076;
    Ddiff%coeffs(7+1,5+1) = -0.0034;
    Ddiff%coeffs(7+1,6+1) = 0.0014;
    Ddiff%coeffs(7+1,7+1) = -0.0005;

    do k=1,l
      Ddiff%w(k) = Ddiff%coeffs(l,k);
    end do 

    DiffNew = Ddiff
  end function DiffNew

  integer function DiffDxminus(w, A, dA, dx)
    real,dimension(:)   :: w
    real,dimension(:,:) :: A
    real,dimension(:,:) :: dA
    real                :: dx

  ! Dxminus computes the backward derivative in the x-direction.
  !
  !  Parameters:
  !    Diff     : Diff object 
  !    float  A : Input 2D array
  !    float dx : Sampling interval
  !    float dA : Output array 
  !
  !  Returns:
  !    The output array, dA, contains the derivative for each point computed
  !    as:
  !    dA[i,j] = (1/dx) sum_:k=1^l w[k](A[i+(k-1)dx,j]-A[(i-kdx,j]
  !
  !    w[k] are weights and l is the length of the differentiator.
  !    (see DiffNew for the definitions of these)
 

  real    :: xsum
  integer :: nx, ny
  integer :: i,j,k
  integer ::  l

  nx = size(A,1);
  ny = size(A,2);

  !
  ! Left border (1 <i < l+1)
  !

  l= size(w,1)

  do concurrent(i=0:l-1,j=0:ny-1)
    xsum=0.0
    do k=1,i
      xsum = -w(k-1+1)*A(i-k+1,j+1) + xsum; 
    enddo
    
    do k=1,l
      xsum = w(k-1+1)*A(i+(k-1)+1,j+1) +xsum; 
    enddo
    
    dA(i+1,j+1) = xsum/dx;
  enddo
  !
  ! Outside border area 
  !
  do concurrent(i=l:nx-l-1,j=0:ny-1) 
    xsum=0.0
    do k=1,l
      xsum = w(k-1+1)*(-A(i-k+1,j+1)+A(i+(k-1)+1,j+1)) +xsum; 
    enddo 
    dA(i+1,j+1) = xsum/dx;
  end do 

  !
  ! Right border 
  !
  do concurrent(i=nx-l:nx-1,j=0:ny-1)
    xsum = 0.0;
    do k=1,l
      xsum = -w(k-1+1)*A(i-k+1,j+1) + xsum;
    enddo 

    do k=1,nx-i
      xsum = w(k-1+1)*A(i+(k-1)+1,j+1) + xsum;
    enddo
    
    dA(i+1,j+1) = xsum/dx;
  end do 
  
  DiffDxminus=1
  end function DiffDxminus

end module der 
