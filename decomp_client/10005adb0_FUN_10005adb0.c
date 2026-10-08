
void FUN_10005adb0(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__objc_msgSend_1021e1c68;
  uVar2 = (*(code *)PTR__objc_msgSend_1021e1c68)(PTR_CNotifier_10226a960,PTR_s_alloc_102268b58);
  uVar2 = (*(code *)puVar1)(uVar2,PTR_s_init_102268ca8);
  (*(code *)puVar1)(uVar2,PTR_s_setSender__102269a70,*(undefined8 *)(param_1 + 0x10));
  (*(code *)puVar1)(uVar2,PTR_s_registerNotifications_102269a78);
  *(undefined8 *)(param_1 + 0x18) = uVar2;
  return;
}

