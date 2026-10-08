
int FUN_100b985f0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  void *pvVar2;
  int iVar3;
  undefined4 local_3c;
  void *local_38;
  
  local_38 = (void *)0x0;
  iVar3 = FUN_100b984f0(&local_38,&local_3c,param_2);
  pvVar2 = local_38;
  if ((iVar3 == 0) || (iVar3 == 100)) {
    for (puVar1 = (undefined8 *)*param_1; puVar1 != param_1; puVar1 = (undefined8 *)*puVar1) {
      if (iVar3 == 0) {
        FUN_100b982a0(puVar1,pvVar2,local_3c);
      }
      else {
        *(undefined1 *)(puVar1 + 0x3d) = 0;
        *(undefined4 *)(puVar1 + 0x3b) = 0;
        puVar1[0x3c] = PTR_s_UNKNOWN_1022cffa0;
        *(byte *)(puVar1 + 3) = *(byte *)(puVar1 + 3) | 2;
      }
    }
    iVar3 = 0;
    if (pvVar2 != (void *)0x0) {
      _free(pvVar2);
    }
  }
  return iVar3;
}

