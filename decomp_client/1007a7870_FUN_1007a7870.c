
undefined8 * FUN_1007a7870(undefined8 *param_1,long param_2,int param_3)

{
  undefined8 uVar1;
  int *piVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined1 auVar7 [16];
  
  plVar4 = (long *)QGridLayout::itemAtPosition((int)*(undefined8 *)(param_2 + 0x30),param_3);
  if ((plVar4 != (long *)0x0) && (lVar5 = (**(code **)(*plVar4 + 0x68))(plVar4), lVar5 != 0)) {
    (**(code **)(*plVar4 + 0x68))(plVar4);
    plVar4 = (long *)QMetaObject::cast((QObject *)&PTR_staticMetaObject_10222c830);
    if (plVar4 != (long *)0x0) {
      puVar6 = (undefined8 *)(**(code **)(*plVar4 + 0x1a0))(plVar4);
      *(undefined4 *)(param_1 + 5) = *(undefined4 *)(puVar6 + 5);
      param_1[4] = puVar6[4];
      param_1[3] = puVar6[3];
      param_1[2] = puVar6[2];
      uVar1 = *puVar6;
      param_1[1] = puVar6[1];
      *param_1 = uVar1;
      piVar2 = (int *)puVar6[6];
      param_1[6] = piVar2;
      if (1 < *piVar2 + 1U) {
        LOCK();
        *piVar2 = *piVar2 + 1;
        UNLOCK();
      }
      piVar2 = (int *)puVar6[7];
      param_1[7] = piVar2;
      if (1 < *piVar2 + 1U) {
        LOCK();
        *piVar2 = *piVar2 + 1;
        UNLOCK();
      }
      piVar2 = (int *)puVar6[8];
      param_1[8] = piVar2;
      if (1 < *piVar2 + 1U) {
        LOCK();
        *piVar2 = *piVar2 + 1;
        UNLOCK();
      }
      piVar2 = (int *)puVar6[9];
      param_1[9] = piVar2;
      if (1 < *piVar2 + 1U) {
        LOCK();
        *piVar2 = *piVar2 + 1;
        UNLOCK();
      }
      piVar2 = (int *)puVar6[10];
      param_1[10] = piVar2;
      if (1 < *piVar2 + 1U) {
        LOCK();
        *piVar2 = *piVar2 + 1;
        UNLOCK();
      }
      *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(puVar6 + 0xb);
      piVar2 = (int *)puVar6[0xc];
      param_1[0xc] = piVar2;
      if (1 < *piVar2 + 1U) {
        LOCK();
        *piVar2 = *piVar2 + 1;
        UNLOCK();
      }
      uVar1 = puVar6[0xd];
      param_1[0xe] = puVar6[0xe];
      param_1[0xd] = uVar1;
      return param_1;
    }
  }
  *(undefined4 *)(param_1 + 1) = 3;
  *(undefined1 *)((long)param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 2) = 3;
  *(undefined1 *)((long)param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 3) = 3;
  *(undefined1 *)((long)param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 4) = 3;
  *(undefined1 *)((long)param_1 + 0x24) = 0;
  puVar3 = PTR_shared_null_1021e1288;
  auVar7._8_4_ = (int)PTR_shared_null_1021e1288;
  auVar7._0_8_ = PTR_shared_null_1021e1288;
  auVar7._12_4_ = (int)((ulong)PTR_shared_null_1021e1288 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 6) = auVar7;
  *(undefined1 (*) [16])(param_1 + 8) = auVar7;
  param_1[10] = puVar3;
  param_1[0xc] = puVar3;
  *(undefined4 *)(param_1 + 5) = 0;
  *(undefined4 *)(param_1 + 0xd) = 0xff;
  *(undefined4 *)((long)param_1 + 0x6c) = 0xff;
  return param_1;
}

