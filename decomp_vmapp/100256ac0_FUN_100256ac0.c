
undefined8 FUN_100256ac0(long param_1,int param_2,int param_3)

{
  undefined *puVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  if (*(long *)(param_1 + 0x18) == 0) {
    uVar4 = FUN_1002e5900(param_1,param_2,param_3);
  }
  else {
    *(int *)(param_1 + 0xc) = param_2 * param_3 * 2;
    cVar2 = (*(code *)PTR__objc_msgSend_100ba25e8)
                      (*(long *)(param_1 + 0x18),PTR_s_initialize__100bed6c8);
    puVar1 = PTR__objc_msgSend_100ba25e8;
    if (cVar2 == '\0') {
      uVar4 = 0;
    }
    else {
      puVar3 = (undefined8 *)
               (*(code *)PTR__objc_msgSend_100ba25e8)
                         (*(undefined8 *)(param_1 + 0x18),PTR_s_m_frame_ptr_100bed680);
      *(undefined8 *)(param_1 + 0x10) = *puVar3;
      uVar4 = (*(code *)puVar1)(*(undefined8 *)(param_1 + 0x18),PTR_s_Open_secondValue__100bed6d0,
                                param_2,param_3);
    }
  }
  return uVar4;
}

