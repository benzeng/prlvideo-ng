
void FUN_100b60470(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined8 uStack_50;
  
  *param_1 = &PTR_FUN_10223f8a0;
  puVar1 = PTR_shared_null_1021e1288;
  param_1[1] = PTR_shared_null_1021e1288;
  auVar5._8_4_ = (int)PTR_shared_null_1021e12f0;
  auVar5._0_8_ = PTR_shared_null_1021e12f0;
  auVar5._12_4_ = (int)((ulong)PTR_shared_null_1021e12f0 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 3) = auVar5;
  auVar6._8_4_ = (int)puVar1;
  auVar6._0_8_ = puVar1;
  auVar6._12_4_ = (int)((ulong)puVar1 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 6) = auVar6;
  param_1[8] = puVar1;
  QDateTime::QDateTime((QDateTime *)(param_1 + 10));
  QDateTime::QDateTime((QDateTime *)(param_1 + 0xb));
  auVar7._8_4_ = (int)PTR_shared_null_1021e1288;
  auVar7._0_8_ = PTR_shared_null_1021e1288;
  auVar7._12_4_ = (int)((ulong)PTR_shared_null_1021e1288 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0xc) = auVar7;
  QDateTime::QDateTime((QDateTime *)(param_1 + 0xe));
  param_1[0x15] = puVar1;
  param_1[0x18] = puVar1;
  QDateTime::QDateTime((QDateTime *)(param_1 + 0x1c));
  uStack_50 = auVar6._8_8_;
  param_1[0x1e] = puVar1;
  param_1[0x1f] = uStack_50;
  param_1[0x21] = puVar1;
  param_1[0x23] = puVar1;
  cVar2 = FUN_100d879d0();
  iVar4 = 4;
  if (cVar2 == '\0') {
    cVar2 = FUN_100d879e0();
    iVar4 = 1;
    if (cVar2 == '\0') {
      iVar3 = FUN_100d7e9e0();
      iVar4 = 7;
      if (iVar3 != 2) {
        iVar4 = FUN_100d7e9e0();
        iVar4 = (uint)(iVar4 == 1) * 3 + 5;
      }
    }
  }
  *(int *)(param_1 + 0x24) = iVar4;
  FUN_100b93c80();
  *(undefined4 *)(param_1 + 0x25) = 0;
  *(undefined1 *)((long)param_1 + 0x124) = 0;
  FUN_100b60910(param_1,param_2);
  return;
}

