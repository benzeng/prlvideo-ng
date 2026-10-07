
undefined8
FUN_1008b2930(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,char *param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  size_t sVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  char *local_60;
  long local_58;
  undefined1 local_50 [24];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_60 = (char *)0x0;
  local_68 = 0;
  local_70 = 0;
  do {
    iVar3 = FUN_1008b2d70(param_5,&local_60,&local_68,&local_70,&local_78);
    pcVar2 = local_60;
    if (iVar3 == 0) {
      uVar8 = FUN_100888460();
      uVar9 = 0;
      if ((uVar8 & 0xfff) == 0x6c) {
        uVar9 = 0;
        FUN_1008890a0(2,"Expecting: ",param_4);
      }
LAB_1008b2d49:
      if (*(long *)PTR____stack_chk_guard_100ba2320 != local_38) {
                    /* WARNING: Subroutine does not return */
        ___stack_chk_fail();
      }
      return uVar9;
    }
    iVar3 = _strcmp(local_60,param_4);
    if (iVar3 == 0) {
LAB_1008b2c8d:
      uVar1 = local_68;
      iVar3 = FUN_1008b3580(local_68,local_50);
      uVar9 = local_70;
      if ((iVar3 == 0) ||
         (iVar3 = FUN_1008b3800(local_50,local_70,&local_78,param_6,param_7), iVar3 == 0)) {
        FUN_10081e1a0(pcVar2);
        FUN_10081e1a0(uVar1);
        FUN_10081e1a0(local_70);
        uVar9 = 0;
      }
      else {
        *param_1 = uVar9;
        *param_2 = local_78;
        if (param_3 == (undefined8 *)0x0) {
          FUN_10081e1a0(pcVar2);
        }
        else {
          *param_3 = pcVar2;
        }
        FUN_10081e1a0(uVar1);
        uVar9 = 1;
      }
      goto LAB_1008b2d49;
    }
    iVar3 = _strcmp(param_4,"ANY PRIVATE KEY");
    if (iVar3 == 0) {
      iVar3 = _strcmp(pcVar2,"ENCRYPTED PRIVATE KEY");
      if ((iVar3 == 0) || (iVar3 = _strcmp(pcVar2,"PRIVATE KEY"), iVar3 == 0)) goto LAB_1008b2c8d;
      sVar6 = _strlen(pcVar2);
      iVar3 = (int)sVar6;
      if (0xc < iVar3) {
        iVar4 = _strcmp(pcVar2 + (long)iVar3 + -0xb,"PRIVATE KEY");
        if ((((iVar4 == 0) && (pcVar2[(long)iVar3 + -0xc] == ' ')) && (0 < iVar3 + -0xc)) &&
           (lVar7 = FUN_1008a99c0(0,pcVar2,iVar3 + -0xc), lVar7 != 0)) {
          lVar7 = *(long *)(lVar7 + 0xb0);
          goto joined_r0x0001008b2bf9;
        }
      }
    }
    else {
      iVar3 = _strcmp(param_4,"PARAMETERS");
      if (iVar3 == 0) {
        sVar6 = _strlen(pcVar2);
        iVar3 = (int)sVar6;
        if (0xb < iVar3) {
          iVar4 = _strcmp(pcVar2 + (long)iVar3 + -10,"PARAMETERS");
          if (((iVar4 == 0) && (pcVar2[(long)iVar3 + -0xb] == ' ')) &&
             ((0 < iVar3 + -0xb && (lVar7 = FUN_1008a99c0(&local_58,pcVar2), lVar7 != 0)))) {
            lVar7 = *(long *)(lVar7 + 0x68);
            if (local_58 != 0) {
              FUN_10087a5e0();
            }
joined_r0x0001008b2bf9:
            if (lVar7 != 0) goto LAB_1008b2c8d;
          }
        }
      }
      else {
        iVar3 = _strcmp(pcVar2,"X509 CERTIFICATE");
        if ((((iVar3 == 0) && (iVar4 = _strcmp(param_4,"CERTIFICATE"), iVar4 == 0)) ||
            (((iVar4 = _strcmp(pcVar2,"NEW CERTIFICATE REQUEST"), iVar4 == 0 &&
              (iVar4 = _strcmp(param_4,"CERTIFICATE REQUEST"), iVar4 == 0)) ||
             ((iVar4 = _strcmp(pcVar2,"CERTIFICATE"), iVar4 == 0 &&
              (iVar5 = _strcmp(param_4,"TRUSTED CERTIFICATE"), iVar5 == 0)))))) ||
           ((((iVar3 == 0 && (iVar3 = _strcmp(param_4,"TRUSTED CERTIFICATE"), iVar3 == 0)) ||
             ((((iVar4 == 0 && (iVar3 = _strcmp(param_4,"PKCS7"), iVar3 == 0)) ||
               ((iVar3 = _strcmp(pcVar2,"PKCS #7 SIGNED DATA"), iVar3 == 0 &&
                (iVar3 = _strcmp(param_4,"PKCS7"), iVar3 == 0)))) ||
              ((iVar4 == 0 && (iVar3 = _strcmp(param_4,"CMS"), iVar3 == 0)))))) ||
            ((iVar3 = _strcmp(pcVar2,"PKCS7"), iVar3 == 0 &&
             (iVar3 = _strcmp(param_4,"CMS"), iVar3 == 0)))))) goto LAB_1008b2c8d;
      }
    }
    FUN_10081e1a0(pcVar2);
    FUN_10081e1a0(local_68);
    FUN_10081e1a0(local_70);
  } while( true );
}

