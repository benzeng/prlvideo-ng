
undefined8 * FUN_100520f30(undefined8 *param_1,undefined8 param_2)

{
  long *plVar1;
  undefined *puVar2;
  long *in_RAX;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long *local_38;
  
  puVar2 = PTR__objc_msgSend_100ba25e8;
  local_38 = in_RAX;
  uVar3 = (*(code *)PTR__objc_msgSend_100ba25e8)
                    (PTR__OBJC_CLASS___NSString_100bedb00,PTR_s_alloc_100bed228);
  uVar3 = (*(code *)puVar2)(uVar3,PTR_s_initWithUTF8String__100bed730,param_2);
  uVar4 = (*(code *)puVar2)(PTR__OBJC_CLASS___NSTimeZone_100bedc50,PTR_s_alloc_100bed228);
  lVar5 = (*(code *)puVar2)(uVar4,PTR_s_initWithName__100beda70,uVar3);
  (*(code *)puVar2)(uVar3,PTR_s_release_100bed2a0);
  if (lVar5 == 0) {
    FUN_1008e3970("[TIMESYNC-ZONE]","TimeSyncCommon",0,"Time zone \'%s\' not found",param_2);
    *param_1 = 0;
  }
  else {
    FUN_100520be0(&local_38,lVar5,param_2);
    (*(code *)PTR__objc_msgSend_100ba25e8)(lVar5,PTR_s_release_100bed2a0);
    *param_1 = local_38;
    if (local_38 != (long *)0x0) {
      LOCK();
      *(int *)(local_38 + 1) = (int)local_38[1] + 1;
      UNLOCK();
      LOCK();
      plVar1 = local_38 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)(*local_38 + 0x10))();
      }
    }
  }
  return param_1;
}

