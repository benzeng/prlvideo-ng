
undefined8 * FUN_10029d1e0(int *param_1,void *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  iVar1 = FUN_10029c880();
  if (iVar1 == -1) {
    FUN_1008e3970("AudioT","LocalDevices",0,"ASSERT( %s ) occured in %s:%d [%s]",
                  "!(from_fmt.compare(to_fmt) == CAudioFormat::CMP_HARD_MISMATCH)",
                  "../Sound/AudioTransform.cpp",0x182,"create");
  }
  if (2 < *param_1 - 2U) {
    FUN_1008e3970("AudioT","LocalDevices",0,"ASSERT( %s ) occured in %s:%d [%s]",
                  "from_fmt.type() == CAudioFormat::PCM20 || from_fmt.type() == CAudioFormat::PCM24 || from_fmt.type() == CAudioFormat::PCM32"
                  ,"../Sound/AudioTransform.cpp",0x185,"create");
  }
  puVar2 = operator_new(0x1a8,(nothrow_t *)PTR_nothrow_100ba21c8);
  puVar3 = (undefined8 *)0x0;
  if (puVar2 != (undefined8 *)0x0) {
    _memcpy(puVar2 + 1,param_1,0xb8);
    _memcpy(puVar2 + 0x18,param_2,0xb8);
    *(undefined4 *)(puVar2 + 0x2f) = 0;
    puVar2[0x34] = 0;
    puVar2[0x33] = 0;
    puVar2[0x32] = 0;
    puVar2[0x31] = 0;
    puVar2[0x30] = 0;
    *puVar2 = &PTR_FUN_100bb22f8;
    puVar3 = puVar2;
  }
  return puVar3;
}

