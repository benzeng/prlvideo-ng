
undefined8 FUN_1005f5620(long param_1,int param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auVar2 [16];
  long *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 local_38;
  
  if (*(int *)(param_1 + 8) != 0) {
    local_38 = param_3;
    QMutex::lock();
    lVar1 = param_1 + 0x10;
    plVar3 = (long *)FUN_1005f5740(lVar1,&local_38);
    if (*plVar3 != 0) {
      puVar4 = (undefined8 *)FUN_1005f5740(lVar1,&local_38);
      uVar6 = *puVar4;
      uVar5 = FUN_1005f5740(lVar1,&local_38);
      uVar6 = FUN_1007dc320(uVar6,uVar5);
      QMutex::unlock();
      uVar7 = FUN_1007dc340(uVar6);
      uVar8 = (ulong)(uint)(*(int *)(param_1 + 8) << 10) / *(ulong *)(param_1 + 0x20);
      auVar2._8_8_ = 0;
      auVar2._0_8_ = uVar8;
      auVar2 = ZEXT416((uint)(param_2 * 1000)) / auVar2;
      if (auVar2._0_8_ <= uVar7) {
        return 0;
      }
      FUN_1007685b0(auVar2._0_4_ - (int)uVar7,uVar8,(ulong)(uint)(param_2 * 1000) % uVar8);
      QMutex::lock();
    }
    uVar6 = FUN_1007dc310();
    puVar4 = (undefined8 *)FUN_1005f5740(lVar1,&local_38);
    *puVar4 = uVar6;
    QMutex::unlock();
  }
  return 0;
}

