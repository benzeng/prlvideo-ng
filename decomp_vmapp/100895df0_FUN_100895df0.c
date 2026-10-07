
undefined8 FUN_100895df0(undefined4 param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined4 *local_e0;
  undefined4 local_d8 [52];
  
  local_e0 = local_d8;
  local_d8[0] = param_1;
  if ((DAT_1011ccc10 != 0) && (iVar1 = FUN_100885160(DAT_1011ccc10,local_d8), -1 < iVar1)) {
    uVar2 = FUN_100885620(DAT_1011ccc10,iVar1);
    return uVar2;
  }
  puVar3 = (undefined8 *)FUN_100822740(&local_e0,&PTR_DAT_1011af640,6,8,FUN_100896840);
  uVar2 = 0;
  if (puVar3 != (undefined8 *)0x0) {
    uVar2 = *puVar3;
  }
  return uVar2;
}

