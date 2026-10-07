
ulong FUN_100870d10(undefined8 param_1,char *param_2,char *param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 local_30;
  
  if (param_3 == (char *)0x0) {
    FUN_100887ce0(4,0x90,0x93,"rsa_pmeth.c",0x229);
    return 0;
  }
  iVar1 = _strcmp(param_2,"rsa_padding_mode");
  if (iVar1 == 0) {
    iVar1 = _strcmp(param_3,"pkcs1");
    iVar3 = 1;
    if (iVar1 != 0) {
      iVar1 = _strcmp(param_3,"sslv23");
      iVar3 = 2;
      if (iVar1 != 0) {
        iVar1 = _strcmp(param_3,"none");
        iVar3 = 3;
        if (iVar1 != 0) {
          iVar1 = _strcmp(param_3,"oeap");
          iVar3 = 4;
          if ((iVar1 != 0) && (iVar1 = _strcmp(param_3,"oaep"), iVar1 != 0)) {
            iVar1 = _strcmp(param_3,"x931");
            iVar3 = 5;
            if (iVar1 != 0) {
              iVar1 = _strcmp(param_3,"pss");
              iVar3 = 6;
              if (iVar1 != 0) {
                FUN_100887ce0(4,0x90,0x76,"rsa_pmeth.c",0x23d);
                return 0xfffffffe;
              }
            }
          }
        }
      }
    }
    uVar6 = 0xffffffff;
    uVar5 = 0x1001;
  }
  else {
    iVar1 = _strcmp(param_2,"rsa_pss_saltlen");
    if (iVar1 == 0) {
      iVar3 = _atoi(param_3);
      uVar6 = 0x18;
      uVar5 = 0x1002;
    }
    else {
      iVar1 = _strcmp(param_2,"rsa_keygen_bits");
      if (iVar1 != 0) {
        iVar1 = _strcmp(param_2,"rsa_keygen_pubexp");
        if (iVar1 != 0) {
          return 0xfffffffe;
        }
        local_30 = 0;
        iVar1 = FUN_10084f680(&local_30,param_3);
        if (iVar1 == 0) {
          return 0;
        }
        uVar2 = FUN_1008964c0(param_1,6,4,0x1004,0,local_30);
        if (0 < (int)uVar2) {
          return (ulong)uVar2;
        }
        FUN_10084b4b0(local_30);
        return (ulong)uVar2;
      }
      iVar3 = _atoi(param_3);
      uVar6 = 4;
      uVar5 = 0x1003;
    }
  }
  uVar4 = FUN_1008964c0(param_1,6,uVar6,uVar5,iVar3,0);
  return uVar4;
}

