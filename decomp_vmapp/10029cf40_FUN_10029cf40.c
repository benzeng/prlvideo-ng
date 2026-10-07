
undefined8 * FUN_10029cf40(void *param_1,void *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if (*(long *)((long)param_1 + 0x10) != *(long *)((long)param_2 + 0x10)) {
    FUN_1008e3970("AudioT","LocalDevices",0,"ASSERT( %s ) occured in %s:%d [%s]",
                  "from_fmt.sizeof_frame() == to_fmt.sizeof_frame()","../Sound/AudioTransform.cpp",
                  199,"create");
  }
  if (*(int *)((long)param_1 + 8) != *(int *)((long)param_2 + 8)) {
    FUN_1008e3970("AudioT","LocalDevices",0,"ASSERT( %s ) occured in %s:%d [%s]",
                  "from_fmt.rate() == to_fmt.rate()","../Sound/AudioTransform.cpp",200,"create");
  }
  puVar1 = operator_new(0x1a8,(nothrow_t *)PTR_nothrow_100ba21c8);
  puVar2 = (undefined8 *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    _memcpy(puVar1 + 1,param_1,0xb8);
    _memcpy(puVar1 + 0x18,param_2,0xb8);
    *(undefined4 *)(puVar1 + 0x2f) = 0;
    puVar1[0x34] = 0;
    puVar1[0x33] = 0;
    puVar1[0x32] = 0;
    puVar1[0x31] = 0;
    puVar1[0x30] = 0;
    *puVar1 = &PTR_FUN_100bb20f0;
    puVar2 = puVar1;
  }
  return puVar2;
}

