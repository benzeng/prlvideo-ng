
undefined8 FUN_1008c2b60(undefined8 *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int *local_78;
  int local_70 [26];
  
  local_70[0] = FUN_100821ab0(*param_1);
  uVar3 = 0;
  if (local_70[0] != 0) {
    local_78 = local_70;
    uVar3 = 0;
    if (-1 < local_70[0]) {
      puVar2 = (undefined8 *)FUN_100822740(&local_78,&PTR_DAT_1011b1580,0x28,8,FUN_1008c3260);
      if (puVar2 == (undefined8 *)0x0) {
        uVar3 = 0;
        if (DAT_1011c2a08 != 0) {
          iVar1 = FUN_100885160(DAT_1011c2a08,local_70);
          uVar3 = 0;
          if (iVar1 != -1) {
            uVar3 = FUN_100885620(DAT_1011c2a08,iVar1);
          }
        }
      }
      else {
        uVar3 = *puVar2;
      }
    }
  }
  return uVar3;
}

