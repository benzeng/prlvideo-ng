
void FUN_1003ed710(undefined8 *param_1)

{
  undefined *puVar1;
  QFile *this;
  QFile *pQVar2;
  undefined1 auVar3 [16];
  
  puVar1 = PTR_shared_null_100ba20d0;
  param_1[0xe3] = PTR_shared_null_100ba20d0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = &PTR_FUN_100bbf530;
  param_1[0xe4] = 0;
  this = operator_new(0x1ff0);
  QFile::QFile(this);
  *(undefined **)(this + 0x10) = puVar1;
  pQVar2 = this + 0x20;
  auVar3._8_4_ = (int)PTR_shared_null_100ba20d0;
  auVar3._0_8_ = PTR_shared_null_100ba20d0;
  auVar3._12_4_ = (int)((ulong)PTR_shared_null_100ba20d0 >> 0x20);
  do {
    *(undefined1 (*) [16])pQVar2 = auVar3;
    *(undefined8 *)(pQVar2 + 0x10) = 0;
    *(undefined4 *)(pQVar2 + 0x18) = 0;
    *(undefined8 *)(pQVar2 + 0x38) = 0;
    *(undefined8 *)(pQVar2 + 0x30) = 0;
    *(undefined8 *)(pQVar2 + 0x28) = 0;
    *(undefined8 *)(pQVar2 + 0x20) = 0;
    *(undefined1 (*) [16])(pQVar2 + 0x40) = auVar3;
    *(undefined8 *)(pQVar2 + 0x50) = 0;
    *(undefined4 *)(pQVar2 + 0x58) = 0;
    *(undefined8 *)(pQVar2 + 0x78) = 0;
    *(undefined8 *)(pQVar2 + 0x70) = 0;
    *(undefined8 *)(pQVar2 + 0x68) = 0;
    *(undefined8 *)(pQVar2 + 0x60) = 0;
    *(undefined1 (*) [16])(pQVar2 + 0x80) = auVar3;
    *(undefined8 *)(pQVar2 + 0x90) = 0;
    *(undefined4 *)(pQVar2 + 0x98) = 0;
    *(undefined8 *)(pQVar2 + 0xb8) = 0;
    *(undefined8 *)(pQVar2 + 0xb0) = 0;
    *(undefined8 *)(pQVar2 + 0xa8) = 0;
    *(undefined8 *)(pQVar2 + 0xa0) = 0;
    pQVar2 = pQVar2 + 0xc0;
  } while (pQVar2 != this + 0x18e0);
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined8 *)(this + 0x1fe0) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  param_1[0xe4] = this;
  return;
}

