
void FUN_10007eba0(long param_1,int param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  
  puVar1 = PTR__objc_msgSend_1021e1c68;
  uVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (*(undefined8 *)(*(long *)(param_1 + 0x40) + 0x18),PTR_s_vmList_102269ef0);
  uVar3 = (*(code *)puVar1)(uVar3,PTR_s_storage_102269f20);
  iVar2 = (*(code *)puVar1)(uVar3,PTR_s_sortOrder_102269f30);
  if (iVar2 == param_2) {
    return;
  }
  uVar3 = (*(code *)puVar1)(*(undefined8 *)(*(long *)(param_1 + 0x40) + 0x18),PTR_s_vmList_102269ef0
                           );
  uVar3 = (*(code *)puVar1)(uVar3,PTR_s_storage_102269f20);
  (*(code *)puVar1)(uVar3,PTR_s_setSortOrder__102269f28,param_2);
  FUN_10007d960(*(undefined8 *)(param_1 + 0x40));
  FUN_100867330(param_1,param_2);
  return;
}

