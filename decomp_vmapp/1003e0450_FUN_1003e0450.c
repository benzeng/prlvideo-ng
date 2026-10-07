
void FUN_1003e0450(long param_1,uint param_2,uint param_3,undefined4 param_4)

{
  long *plVar1;
  void *pvVar2;
  undefined8 *puVar3;
  char *pcVar4;
  
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0xdc) = param_4;
  *(uint *)(param_1 + 0x94) = param_2 & 0x100;
  *(uint *)(param_1 + 0x28) = param_2;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  *(long *)(param_1 + 0x60) = param_1 + 0xac;
  *(undefined4 *)(param_1 + 0x68) = 0x12;
  *(undefined2 *)(param_1 + 0xbc) = 0;
  *(undefined8 *)(param_1 + 0xb4) = 0;
  *(undefined8 *)(param_1 + 0xac) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  plVar1 = (long *)FUN_100707430(0xffffffff,param_3);
  *(long **)(param_1 + 0x30) = plVar1;
  if (plVar1 == (long *)0x0) {
    pcVar4 = "[DVDRom] Can not create file abstraction layer";
  }
  else {
    *(undefined8 *)(param_1 + 0x88) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined4 *)(param_1 + 0x118) = 0;
    *(undefined8 *)(param_1 + 0x110) = 0;
    *(undefined8 *)(param_1 + 0x108) = 0;
    *(undefined8 *)(param_1 + 0x100) = 0;
    *(undefined8 *)(param_1 + 0xf8) = 0;
    *(undefined8 *)(param_1 + 0xf0) = 0;
    *(undefined8 *)(param_1 + 0xe8) = 0;
    *(undefined8 *)(param_1 + 0xe0) = 0;
    *(undefined8 *)(param_1 + 0xa0) = 0;
    *(undefined8 *)(param_1 + 0x98) = 0;
    *(undefined8 *)(param_1 + 0x74) = 0x6500000004;
    *(undefined4 *)(param_1 + 0x84) = 1;
    *(undefined4 *)(param_1 + 0x7c) = 2;
    pvVar2 = _valloc(0x20000);
    *(void **)(param_1 + 0x38) = pvVar2;
    if (pvVar2 != (void *)0x0) {
      *(undefined1 *)(param_1 + 0x40) = 0;
      *(undefined4 *)(param_1 + 0xc4) = 0;
      *(ulong *)(param_1 + 0xd0) = (ulong)param_3;
      *(undefined1 *)(param_1 + 0xd8) = 0;
      return;
    }
    (**(code **)(*plVar1 + 0x10))(plVar1);
    *(undefined8 *)(param_1 + 0x30) = 0;
    pcVar4 = "[DVDRom] Can not alocate mamory for cache";
  }
  FUN_1008e3970("","DVDImage",0,pcVar4);
  puVar3 = (undefined8 *)___cxa_allocate_exception(8);
  *puVar3 = PTR_vtable_100ba2308 + 0x10;
                    /* WARNING: Subroutine does not return */
  ___cxa_throw(puVar3,PTR_typeinfo_100ba22c8,PTR__exception_100ba21c0);
}

