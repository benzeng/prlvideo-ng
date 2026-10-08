
long * FUN_100c608e0(code *param_1,undefined *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  code *pcVar3;
  long *plVar4;
  
  plVar1 = (long *)FUN_100bf3540(0xb0,"lhash.c",0x78);
  plVar4 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    puVar2 = (undefined8 *)FUN_100bf3540(0x80,"lhash.c",0x7a);
    *plVar1 = (long)puVar2;
    if (puVar2 == (undefined8 *)0x0) {
      FUN_100bf3910(plVar1);
      plVar4 = (long *)0x0;
    }
    else {
      *puVar2 = 0;
      *(undefined8 *)(*plVar1 + 8) = 0;
      *(undefined8 *)(*plVar1 + 0x10) = 0;
      *(undefined8 *)(*plVar1 + 0x18) = 0;
      *(undefined8 *)(*plVar1 + 0x20) = 0;
      *(undefined8 *)(*plVar1 + 0x28) = 0;
      *(undefined8 *)(*plVar1 + 0x30) = 0;
      *(undefined8 *)(*plVar1 + 0x38) = 0;
      *(undefined8 *)(*plVar1 + 0x40) = 0;
      *(undefined8 *)(*plVar1 + 0x48) = 0;
      *(undefined8 *)(*plVar1 + 0x50) = 0;
      *(undefined8 *)(*plVar1 + 0x58) = 0;
      *(undefined8 *)(*plVar1 + 0x60) = 0;
      *(undefined8 *)(*plVar1 + 0x68) = 0;
      *(undefined8 *)(*plVar1 + 0x70) = 0;
      *(undefined8 *)(*plVar1 + 0x78) = 0;
      if (param_2 == (undefined *)0x0) {
        param_2 = PTR__strcmp_1021e1ca0;
      }
      plVar1[1] = (long)param_2;
      pcVar3 = FUN_100c60ae0;
      if (param_1 != (code *)0x0) {
        pcVar3 = param_1;
      }
      plVar1[2] = (long)pcVar3;
      *(undefined4 *)(plVar1 + 3) = 8;
      *(undefined4 *)((long)plVar1 + 0x1c) = 0x10;
      *(undefined4 *)(plVar1 + 4) = 0;
      *(undefined4 *)((long)plVar1 + 0x24) = 8;
      plVar1[5] = 0x200;
      plVar1[6] = 0x100;
      *(undefined4 *)(plVar1 + 0x15) = 0;
      plVar1[0x14] = 0;
      plVar1[0x13] = 0;
      plVar1[0x12] = 0;
      plVar1[0x11] = 0;
      plVar1[0x10] = 0;
      plVar1[0xf] = 0;
      plVar1[0xe] = 0;
      plVar1[0xd] = 0;
      plVar1[0xc] = 0;
      plVar1[0xb] = 0;
      plVar1[10] = 0;
      plVar1[9] = 0;
      plVar1[8] = 0;
      plVar1[7] = 0;
      plVar4 = plVar1;
    }
  }
  return plVar4;
}

