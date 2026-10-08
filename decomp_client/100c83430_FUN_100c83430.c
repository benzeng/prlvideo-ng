
undefined8 FUN_100c83430(long *param_1,int param_2,char *param_3)

{
  long lVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  
  uVar3 = 0;
  if ((((*param_3 == '\x01') || (*param_3 == '\x06')) &&
      (lVar1 = *(long *)(param_3 + 0x20), lVar1 != 0)) && ((*(byte *)(lVar1 + 8) & 1) != 0)) {
    puVar2 = (undefined4 *)((long)*(int *)(lVar1 + 0xc) + *param_1);
    if (param_2 != 0) {
      uVar3 = FUN_100bf2cf0(puVar2,param_2,*(undefined4 *)(lVar1 + 0x10),"tasn_utl.c",0x76);
      return uVar3;
    }
    *puVar2 = 1;
    uVar3 = 1;
  }
  return uVar3;
}

