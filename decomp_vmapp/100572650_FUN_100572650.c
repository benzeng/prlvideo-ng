
undefined8 FUN_100572650(long *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  char cVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 uVar6;
  char *pcVar7;
  undefined8 *puVar8;
  
  puVar1 = (undefined8 *)param_1[0x225];
  puVar2 = (undefined8 *)param_1[0x226];
  if (puVar2 == puVar1) {
    FUN_1008e3970("","vdisk",0,"Error: empty storages set to count block size");
    uVar6 = 0x80021011;
  }
  else {
    uVar4 = (**(code **)(*(long *)*puVar1 + 0x28))();
    *(uint *)(param_1 + 0x224) = uVar4;
    uVar5 = (**(code **)(*(long *)*puVar1 + 0x28))();
    if (uVar4 == uVar5) {
      do {
        puVar8 = puVar1 + 1;
        cVar3 = (**(code **)(*param_1 + 0x1d8))(param_1);
        if ((cVar3 == '\0') &&
           ((uVar5 = (**(code **)(*(long *)*puVar1 + 0x18))(),
            uVar5 % (ulong)*(uint *)(param_1 + 0x224) != 0 ||
            (uVar5 = (**(code **)(*(long *)*puVar1 + 0x20))(),
            uVar5 % (ulong)*(uint *)(param_1 + 0x224) != 0)))) {
          pcVar7 = "Error: storage is not aligned on block size!";
          goto LAB_100572757;
        }
        if (puVar2 == puVar8) {
          return 0;
        }
        uVar4 = *(uint *)(param_1 + 0x224);
        uVar5 = (**(code **)(*(long *)*puVar8 + 0x28))();
        puVar1 = puVar8;
      } while (uVar4 == uVar5);
    }
    pcVar7 = "Error: storages block size are different!";
LAB_100572757:
    FUN_1008e3970("","vdisk",0,pcVar7);
    uVar6 = 0x80021009;
  }
  return uVar6;
}

