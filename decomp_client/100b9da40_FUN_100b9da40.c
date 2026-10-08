
ulong FUN_100b9da40(char *param_1,undefined8 *param_2,ulong *param_3)

{
  uint uVar1;
  FILE *pFVar2;
  long lVar3;
  ulong uVar4;
  void *pvVar5;
  size_t sVar6;
  char *pcVar7;
  undefined8 uVar8;
  
  pFVar2 = _fopen(param_1,"rb");
  if (pFVar2 == (FILE *)0x0) {
    pcVar7 = "File %s not found";
    uVar8 = 0xfffffff9;
LAB_100b9daee:
    uVar4 = FUN_100b9d470(uVar8,pcVar7,param_1);
    return uVar4;
  }
  lVar3 = _ftell(pFVar2);
  _fseek(pFVar2,0,2);
  uVar4 = _ftell(pFVar2);
  _fseek(pFVar2,lVar3,0);
  *param_3 = uVar4;
  if (uVar4 == 0) {
    _fclose(pFVar2);
    *param_2 = PTR_s__1022cfcf0;
    return 0;
  }
  if (0x100000 < uVar4) {
    _fclose(pFVar2);
    *param_2 = 0;
    param_1 = (char *)*param_3;
    pcVar7 = "Invalid file size %ul";
    uVar8 = 0xfffffffc;
    goto LAB_100b9daee;
  }
  pvVar5 = _malloc(uVar4 + 1);
  if (pvVar5 == (void *)0x0) {
    uVar1 = FUN_100b9d470(0xfffffffe,0);
  }
  else {
    sVar6 = _fread(pvVar5,uVar4,1,pFVar2);
    if (sVar6 == 1) {
      *(undefined1 *)((long)pvVar5 + *param_3) = 0;
      *param_2 = pvVar5;
      uVar4 = 0;
      goto LAB_100b9db8a;
    }
    _free(pvVar5);
    uVar1 = FUN_100b9d470(0xfffffffc,"Can\'t read from file %s",param_1);
  }
  uVar4 = (ulong)uVar1;
LAB_100b9db8a:
  _fclose(pFVar2);
  return uVar4;
}

