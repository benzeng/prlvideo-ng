
int FUN_0040e780(undefined4 *param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined1 auStack_18 [4];
  undefined4 local_14;
  
  puVar1 = PTR_OTG_LINK_VALIDITY_MAGIC_0061bd10;
  iVar2 = -1;
  if (param_1 != (undefined4 *)0x0) {
    param_1[1] = 0xfffffff5;
    param_1[2] = *(undefined4 *)puVar1;
    iVar2 = FUN_0040f060(auStack_18);
    if (iVar2 == 0) {
      param_1[1] = 0;
      *param_1 = local_14;
    }
  }
  return iVar2;
}

