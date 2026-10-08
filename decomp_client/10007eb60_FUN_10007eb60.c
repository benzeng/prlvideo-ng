
bool FUN_10007eb60(long param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  
  puVar1 = PTR__objc_msgSend_1021e1c68;
  uVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (*(undefined8 *)(*(long *)(param_1 + 0x40) + 0x18),PTR_s_vmList_102269ef0);
  iVar2 = (*(code *)puVar1)(uVar3,PTR_s_mode_102269ef8);
  return iVar2 == 1;
}

