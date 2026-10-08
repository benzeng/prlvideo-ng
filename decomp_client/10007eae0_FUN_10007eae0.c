
void FUN_10007eae0(long param_1,byte param_2)

{
  undefined *puVar1;
  uint uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR__objc_msgSend_1021e1c68;
  uVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (*(undefined8 *)(*(long *)(param_1 + 0x40) + 0x18),PTR_s_vmList_102269ef0);
  uVar2 = (*(code *)puVar1)(uVar3,PTR_s_mode_102269ef8);
  if (uVar2 == param_2) {
    return;
  }
  FUN_10007d320(*(undefined8 *)(param_1 + 0x40),(uint)param_2);
  FUN_10007d450(*(undefined8 *)(param_1 + 0x40));
  FUN_1008672d0(param_1,param_2);
  return;
}

