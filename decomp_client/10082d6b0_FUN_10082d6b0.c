
void FUN_10082d6b0(QObject *param_1,int param_2,undefined4 param_3,undefined8 *param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  byte bVar6;
  undefined8 local_298;
  undefined8 local_290;
  undefined8 local_288;
  undefined4 local_188;
  QArrayData *local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160 [34];
  undefined4 local_50;
  void *local_48;
  undefined8 local_40;
  long local_30;
  
  bVar6 = 0;
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_30 = lVar1;
  if (param_2 == 10) {
    if ((*(code **)param_4[1] == FUN_10082daa0) && (((long *)param_4[1])[1] == 0)) {
      *(undefined4 *)*param_4 = 0;
    }
  }
  else if (param_2 == 0) {
    switch(param_3) {
    case 0:
      local_40 = param_4[1];
      local_48 = (void *)0x0;
      QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_10220c220,0,&local_48);
      break;
    case 1:
      FUN_100331470(param_1,*(undefined1 *)param_4[1]);
      return;
    case 2:
      FUN_100331860(param_1);
      return;
    case 3:
      FUN_100331920(param_1,*(undefined1 *)param_4[1],*(undefined4 *)param_4[2]);
      return;
    case 4:
      FUN_1003329a0(param_1);
      return;
    case 5:
      FUN_1003329d0(param_1);
      return;
    case 6:
      FUN_100332a00(param_1,*(undefined1 *)param_4[1],*(undefined1 *)param_4[2]);
      return;
    case 7:
      FUN_100332a30(param_1);
      return;
    case 8:
      uVar2 = param_4[1];
      puVar4 = (undefined8 *)param_4[2];
      local_288 = puVar4[2];
      local_298 = *puVar4;
      local_290 = puVar4[1];
      local_180 = *(QArrayData **)param_4[3];
      if (1 < *(int *)local_180 + 1U) {
        LOCK();
        *(int *)local_180 = *(int *)local_180 + 1;
        UNLOCK();
        local_48 = (void *)CONCAT71(local_48._1_7_,*(int *)local_180 != 0);
      }
      local_178 = local_298;
      local_170 = local_290;
      local_168 = local_288;
      FUN_100331680(param_1,uVar2,&local_180);
      if (*(int *)local_180 != -1) {
        if (*(int *)local_180 != 0) {
          LOCK();
          *(int *)local_180 = *(int *)local_180 + -1;
          UNLOCK();
          local_48 = (void *)CONCAT71(local_48._1_7_,*(int *)local_180 != 0);
          if (*(int *)local_180 != 0) break;
        }
        QArrayData::deallocate(local_180,1,8);
      }
      break;
    case 9:
      FUN_100331700(param_1,param_4[1]);
      return;
    case 10:
      FUN_100331770(param_1,param_4[1],*(undefined4 *)param_4[2]);
      return;
    case 0xb:
      FUN_100332ab0(param_1,*(undefined1 *)param_4[1]);
      return;
    case 0xc:
      uVar2 = *(undefined8 *)param_4[1];
      _memcpy(local_160,(void *)param_4[2],0x114);
      puVar4 = local_160;
      puVar5 = &local_298;
      for (lVar3 = 0x22; lVar3 != 0; lVar3 = lVar3 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + (ulong)bVar6 * -2 + 1;
        puVar5 = puVar5 + (ulong)bVar6 * -2 + 1;
      }
      local_188 = local_50;
      FUN_100332ae0(param_1,uVar2);
      break;
    case 0xd:
      FUN_100332b10(param_1);
      return;
    }
  }
  if (lVar1 == local_30) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

