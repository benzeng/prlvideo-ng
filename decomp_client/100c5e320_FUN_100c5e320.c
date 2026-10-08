
undefined8 FUN_100c5e320(char *param_1,ushort *param_2)

{
  ushort uVar1;
  int iVar2;
  servent *psVar3;
  int *piVar4;
  undefined8 uVar5;
  
  if (param_1 == (char *)0x0) {
    FUN_100c62ee0(0x20,0x6b,0x71,"b_sock.c",0xb0);
    uVar5 = 0;
  }
  else {
    iVar2 = _atoi(param_1);
    if (iVar2 == 0) {
      FUN_100bf2780(9,0x17,"b_sock.c",0xb7);
      psVar3 = _getservbyname(param_1,"tcp");
      if (psVar3 == (servent *)0x0) {
        FUN_100bf2780(10,0x17,"b_sock.c",0xc3);
        iVar2 = _strcmp(param_1,"http");
        if (iVar2 == 0) {
          *param_2 = 0x50;
          uVar5 = 1;
        }
        else {
          iVar2 = _strcmp(param_1,"telnet");
          if (iVar2 == 0) {
            *param_2 = 0x17;
            uVar5 = 1;
          }
          else {
            iVar2 = _strcmp(param_1,"socks");
            if (iVar2 == 0) {
              *param_2 = 0x438;
              uVar5 = 1;
            }
            else {
              iVar2 = _strcmp(param_1,"https");
              if ((iVar2 != 0) && (iVar2 = _strcmp(param_1,"ssl"), iVar2 != 0)) {
                iVar2 = _strcmp(param_1,"ftp");
                if (iVar2 == 0) {
                  *param_2 = 0x15;
                  return 1;
                }
                iVar2 = _strcmp(param_1,"gopher");
                if (iVar2 != 0) {
                  piVar4 = ___error();
                  FUN_100c62ee0(2,3,*piVar4,"b_sock.c",0xd8);
                  FUN_100c642a0(3,"service=\'",param_1,"\'");
                  return 0;
                }
                *param_2 = 0x46;
                return 1;
              }
              *param_2 = 0x1bb;
              uVar5 = 1;
            }
          }
        }
      }
      else {
        uVar1 = (ushort)psVar3->s_port;
        *param_2 = uVar1 << 8 | uVar1 >> 8;
        FUN_100bf2780(10,0x17,"b_sock.c",0xc3);
        uVar5 = 1;
      }
    }
    else {
      *param_2 = (ushort)iVar2;
      uVar5 = 1;
    }
  }
  return uVar5;
}

