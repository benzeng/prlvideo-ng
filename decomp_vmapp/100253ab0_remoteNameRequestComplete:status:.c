
/* Function Stack Size: 0x1c bytes */

void BTController::remoteNameRequestComplete_status_(ID param_1,SEL param_2,ID param_3,int param_4)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  char *pcVar4;
  long lVar5;
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
  
  puVar1 = PTR__objc_msgSend_100ba25e8;
  lVar5 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_38 = lVar5;
  if (*(long *)(param_1 + _name_update_cb) != 0) {
    puVar2 = (undefined1 *)
             (*(code *)PTR__objc_msgSend_100ba25e8)(param_3,PTR_s_getAddress_100bed3e0);
    local_140 = puVar2[5];
    local_13f = puVar2[4];
    local_13e = puVar2[3];
    local_13d = puVar2[2];
    local_13c = puVar2[1];
    local_13b = *puVar2;
    uVar3 = (*(code *)puVar1)(param_3,PTR_s_nameOrAddress_100bed3e8);
    pcVar4 = (char *)(*(code *)puVar1)(uVar3,PTR_s_UTF8String_100bed218);
    _strncpy(local_134,pcVar4,0xf8);
    local_3d = 0;
    local_138 = (*(code *)puVar1)(param_3,PTR_s_classOfDevice_100bed3f0);
    if (1 < DAT_1011b55f8) {
      FUN_1008e3970("","LocalDevices",2,"Remote device name updated (%08x)",param_4);
    }
    (**(code **)(param_1 + _name_update_cb))
              (4,&local_140,0,*(undefined8 *)(param_1 + _name_update_ctx));
    *(undefined1 *)(param_1 + _name_update_in_progress) = 0;
    lVar5 = *(long *)PTR____stack_chk_guard_100ba2320;
  }
  if (lVar5 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

