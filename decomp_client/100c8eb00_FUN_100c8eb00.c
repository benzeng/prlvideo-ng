
undefined8 FUN_100c8eb00(char *param_1,long *param_2)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  char *pcVar7;
  char *pcVar8;
  int iVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  *param_2 = 0;
  if (((param_1 != (char *)0x0) && (*param_1 != '\0')) && (*param_1 != '\n')) {
    iVar3 = _strncmp(param_1,"Proc-Type: ",0xb);
    if (iVar3 != 0) {
      uVar10 = 0x6b;
      uVar5 = 0x6b;
      uVar11 = 0x1ee;
LAB_100c8eb6b:
      FUN_100c62ee0(9,uVar10,uVar5,"pem_lib.c",uVar11);
      return 0;
    }
    if (param_1[0xb] != '4') {
      return 0;
    }
    if (param_1[0xc] != ',') {
      return 0;
    }
    param_1 = param_1 + 0xd;
    iVar3 = _strncmp(param_1,"ENCRYPTED",9);
    if (iVar3 != 0) {
      FUN_100c62ee0(9,0x6b,0x6a,"pem_lib.c",0x1f9);
      return 0;
    }
    while( true ) {
      if (*param_1 == '\0') {
        FUN_100c62ee0(9,0x6b,0x70,"pem_lib.c",0x1fe);
        return 0;
      }
      if (*param_1 == '\n') break;
      param_1 = param_1 + 1;
    }
    iVar3 = _strncmp(param_1 + 1,"DEK-Info: ",10);
    if (iVar3 != 0) {
      FUN_100c62ee0(9,0x6b,0x69,"pem_lib.c",0x203);
      return 0;
    }
    pcVar8 = param_1 + 10;
    do {
      do {
        pcVar7 = pcVar8;
        cVar1 = pcVar7[1];
        pcVar8 = pcVar7 + 1;
      } while ((byte)(cVar1 - 0x30U) < 10);
    } while ((cVar1 == '-') || ((byte)(cVar1 + 0xbfU) < 0x1a));
    *pcVar8 = '\0';
    lVar4 = FUN_100c6bd50(param_1 + 0xb);
    *param_2 = lVar4;
    *pcVar8 = cVar1;
    if (lVar4 == 0) {
      FUN_100c62ee0(9,0x6b,0x72,"pem_lib.c",0x21b);
      return 0;
    }
    iVar3 = *(int *)(lVar4 + 0xc);
    if (0 < iVar3) {
      ___bzero(param_2 + 1,(ulong)(iVar3 - 1) + 1);
      bVar2 = 0;
      uVar6 = 0;
      do {
        cVar1 = pcVar7[uVar6 + 2];
        iVar9 = (int)cVar1;
        if ((byte)(cVar1 - 0x30U) < 10) {
          iVar9 = iVar9 + -0x30;
        }
        else if ((byte)(cVar1 + 0xbfU) < 6) {
          iVar9 = iVar9 + -0x37;
        }
        else {
          if (5 < (byte)(cVar1 + 0x9fU)) {
            uVar10 = 0x65;
            uVar5 = 0x67;
            uVar11 = 0x235;
            goto LAB_100c8eb6b;
          }
          iVar9 = iVar9 + -0x57;
        }
        lVar4 = (long)((int)(((uint)(uVar6 >> 0x1f) & 1) + (int)uVar6) >> 1);
        *(byte *)((long)param_2 + lVar4 + 8) =
             *(byte *)((long)param_2 + lVar4 + 8) | (byte)(iVar9 << (~bVar2 & 4));
        uVar6 = uVar6 + 1;
        bVar2 = bVar2 + 4;
      } while ((int)uVar6 < iVar3 * 2);
    }
  }
  return 1;
}

