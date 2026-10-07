
undefined8 FUN_100252d90(undefined8 *param_1,undefined8 *param_2,undefined1 *param_3)

{
  long *plVar1;
  undefined *puVar2;
  void *pvVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 local_30;
  undefined1 local_2f;
  undefined1 local_2e;
  undefined1 local_2d;
  undefined1 local_2c;
  undefined1 local_2b;
  
  local_30 = param_3[5];
  local_2f = param_3[4];
  local_2e = param_3[3];
  local_2d = param_3[2];
  local_2c = param_3[1];
  local_2b = *param_3;
  pvVar3 = operator_new(8,(nothrow_t *)PTR_nothrow_100ba21c8);
  *param_2 = pvVar3;
  puVar2 = PTR__objc_msgSend_100ba25e8;
  uVar5 = 0xe00002bd;
  if (pvVar3 != (void *)0x0) {
    (*(code *)PTR__objc_msgSend_100ba25e8)(*param_1,PTR_s_setAddrToOpen__100bed320,&local_30);
    (*(code *)puVar2)(*param_1,PTR_s_performSelector_onThread_withObj_100bed2c0,
                      PTR_s_openDevice_100bed328,param_1[1],0,1);
    lVar4 = (*(code *)puVar2)(*param_1,PTR_s_getDevOpened_100bed330);
    plVar1 = (long *)*param_2;
    if (lVar4 == 0) {
      if (plVar1 != (long *)0x0) {
        operator_delete(plVar1);
      }
      *param_2 = 0;
    }
    else {
      *plVar1 = lVar4;
      uVar5 = 0;
    }
  }
  return uVar5;
}

