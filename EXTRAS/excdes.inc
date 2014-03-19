      interface
!       int Xc_Select_ip1/2/3(int set_nb, int des_exc, void *iplist, int nelm)
        function Select_ip1(set_nb, des_exc, iplist, nelm)                     &
     &           result (status) BIND(C,name='Xc_Select_ip1')
          use ISO_C_BINDING
          implicit none
          integer(C_INT) :: status
          integer(C_INT), intent(IN), value :: set_nb, des_exc, nelm
          integer(C_INT), dimension(nelm), intent(IN) :: iplist
        end function Select_ip1
        function Select_ip2(set_nb, des_exc, iplist, nelm)                     &
     &           result (status) BIND(C,name='Xc_Select_ip2')
          use ISO_C_BINDING
          implicit none
          integer(C_INT) :: status
          integer(C_INT), intent(IN), value :: set_nb, des_exc, nelm
          integer(C_INT), dimension(nelm), intent(IN) :: iplist
        end function Select_ip2
        function Select_ip3(set_nb, des_exc, iplist, nelm)                     &
     &           result (status) BIND(C,name='Xc_Select_ip3')
          use ISO_C_BINDING
          implicit none
          integer(C_INT) :: status
          integer(C_INT), intent(IN), value :: set_nb, des_exc, nelm
          integer(C_INT), dimension(nelm), intent(IN) :: iplist
        end function Select_ip3
!       int Xc_Select_date(int set_nb, int des_exc, int *date_list, int nelm, float delta)
        function Select_date(set_nb, des_exc, date_list, nelm, delta)          &
     &           result (status) BIND(C,name='Xc_Select_date')
          use ISO_C_BINDING
          implicit none
          integer(C_INT) :: status
          real(C_FLOAT), intent(IN) :: delta
          integer(C_INT), intent(IN), value :: set_nb, des_exc, nelm
          integer(C_INT), dimension(nelm), intent(IN) :: date_list
        end function Select_date
!       int Xc_Select_etiquette(int set_nb, int des_exc, char *etiq_list[], int nelm)
        function Select_etiquette(set_nb, des_exc, etiq_list, nelm)            &
     &           result (status) BIND(C,name='Xc_Select_etiquette')
          use ISO_C_BINDING
          implicit none
          integer(C_INT) :: status
          integer(C_INT), intent(IN), value :: set_nb, des_exc, nelm
          character(C_CHAR), dimension(*), intent(IN) :: etiq_list
        end function Select_etiquette
!       int Xc_Select_nomvar(int set_nb, int des_exc, char *nomv_list[], int nelm)
        function Select_nomvar(set_nb, des_exc, nomv_list, nelm)               &
     &           result (status) BIND(C,name='Xc_Select_nomvar')
          use ISO_C_BINDING
          implicit none
          integer(C_INT) :: status
          integer(C_INT), intent(IN), value :: set_nb, des_exc, nelm
          character(C_CHAR), dimension(*), intent(IN) :: nomv_list
        end function Select_nomvar
!       int Xc_Select_typvar(int set_nb, int des_exc, char *typv_list[], int nelm)
        function Select_typvar(set_nb, des_exc, typv_list, nelm)               &
     &           result (status) BIND(C,name='Xc_Select_typvar')
          use ISO_C_BINDING
          implicit none
          integer(C_INT) :: status
          integer(C_INT), intent(IN), value :: set_nb, des_exc, nelm
          character(C_CHAR), dimension(*), intent(IN) :: typv_list
        end function Select_typvar
!       int Xc_Select_suppl(int set_nb, int des_exc, int ni, int nj, int nk, int ig1, int ig2, int ig3, int ig4, char gtyp)
        function Select_suppl(set_nb, des_exc, ni, nj, nk,                     &
     &                        ig1, ig2, ig3, ig4, gtyp)                        &
     &           result (status) BIND(C,name='Xc_Select_suppl')
          use ISO_C_BINDING
          implicit none
          integer(C_INT) :: status
          integer(C_INT), intent(IN), value :: set_nb, des_exc
          integer(C_INT), intent(IN), value :: ni, nj, nk
          integer(C_INT), intent(IN), value :: ig1, ig2, ig3, ig4
          character(C_CHAR), intent(IN) :: gtyp
        end function Select_suppl
      end interface
