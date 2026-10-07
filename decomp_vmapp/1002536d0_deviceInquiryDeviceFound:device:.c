
/* Function Stack Size: 0x20 bytes */

void BTController::deviceInquiryDeviceFound_device_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  char *pcVar5;
  undefined8 uVar6;
  undefined1 local_140;
  undefined1 local_13f;
  undefined1 local_13e;
  undefined1 local_13d;
  undefined1 local_13c;
  undefined1 local_13b;
  undefined4 local_138;
  char local_134 [247];
  undefined1 local_3d;
  long local_38;
  
  puVar2 = PTR__objc_msgSend_100ba25e8;
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_38 = lVar1;
  if (*(long *)(param_1 + _inquiry_cb) != 0) {
    puVar3 = (undefined1 *)
             (*(code *)PTR__objc_msgSend_100ba25e8)(param_4,PTR_s_getAddress_100bed3e0);
    local_140 = puVar3[5];
    local_13f = puVar3[4];
    local_13e = puVar3[3];
    local_13d = puVar3[2];
    local_13c = puVar3[1];
    local_13b = *puVar3;
    uVar4 = (*(code *)puVar2)(param_4,PTR_s_nameOrAddress_100bed3e8);
    pcVar5 = (char *)(*(code *)puVar2)(uVar4,PTR_s_UTF8String_100bed218);
    _strncpy(local_134,pcVar5,0xf8);
    local_3d = 0;
    local_138 = (*(code *)puVar2)(param_4,PTR_s_classOfDevice_100bed3f0);
    uVar4 = (*(code *)puVar2)(param_4,PTR_s_addressString_100bed3f8);
    uVar6 = (*(code *)puVar2)(param_4,PTR_s_nameOrAddress_100bed3e8);
    if (1 < DAT_1011b55f8) {
      uVar4 = (*(code *)puVar2)(uVar4,PTR_s_UTF8String_100bed218);
      uVar6 = (*(code *)puVar2)(uVar6,PTR_s_UTF8String_100bed218);
      FUN_1008e3970("","LocalDevices",2,"deviceFound: addr %s name %s class 0x%x",uVar4,uVar6,
                    local_138);
    }
    (**(code **)(param_1 + _inquiry_cb))(3,&local_140,0,*(undefined8 *)(param_1 + _inquiry_ctx));
  }
  if (lVar1 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

