
undefined8 * FUN_100520be0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  *param_1 = 0;
  lVar2 = (*(code *)PTR__objc_msgSend_100ba25e8)(param_2,PTR_s_data_100bed468);
  if (lVar2 == 0) {
    FUN_1008e3970("[TIMESYNC-ZONE]","TimeSyncCommon",0,"No time zone data for %s",param_3);
  }
  else {
    uVar3 = (*(code *)PTR__objc_msgSend_100ba25e8)(lVar2,PTR_s_bytes_100bed470);
    uVar1 = (*(code *)PTR__objc_msgSend_100ba25e8)(lVar2,PTR_s_length_100bed478);
    puVar4 = operator_new(0x48);
    FUN_1005230c0(puVar4,param_3);
    *puVar4 = &PTR_FUN_100bc4d50;
    puVar5 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
    if (puVar5 == (undefined8 *)0x0) {
      *puVar4 = &PTR_FUN_100bc4df0;
      FUN_100521220(puVar4 + 4);
      FUN_100521310(puVar4);
      operator_delete(puVar4);
      *param_1 = 0;
      puVar4 = (undefined8 *)0x0;
    }
    else {
      *(undefined4 *)(puVar5 + 1) = 1;
      puVar5[2] = puVar4;
      *puVar5 = &PTR_FUN_10111d580;
      *param_1 = puVar5;
    }
    FUN_100523170(puVar4,uVar3,uVar1);
  }
  return param_1;
}

