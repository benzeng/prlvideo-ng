
undefined8 FUN_100272cf0(long param_1)

{
  long lVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  
  puVar3 = (undefined8 *)&DAT_1011c3820;
  lVar4 = 0;
  do {
    lVar1 = *(long *)(*(long *)(param_1 + 8) + lVar4 * 8);
    if ((lVar1 != 0) && (*(long *)(lVar1 + 0x188) != 0)) {
      puVar3[6] = 0;
      puVar3[7] = 0;
      puVar3[4] = 0;
      puVar3[5] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      *puVar3 = 0;
      puVar3[1] = 0;
      *(undefined2 *)((long)puVar3 + 0x2c) = *(undefined2 *)(lVar1 + 0x1c0);
      *(undefined4 *)(puVar3 + 5) = *(undefined4 *)(lVar1 + 0x1bc);
      iVar2 = FUN_1006b3dc0();
      if (iVar2 == 1) {
        iVar2 = (**(code **)(**(long **)(lVar1 + 0x170) + 0xc0))
                          (*(long **)(lVar1 + 0x170),(long)puVar3 + 0x2e);
        if (iVar2 != 0) {
          FUN_1008e3970("","LocalDevices",0,"net_adapter %d:Failed to get vme hwaddr: error %x",
                        *(undefined4 *)(lVar1 + 0x150));
        }
      }
      (**(code **)(**(long **)(lVar1 + 0x188) + 0x20))(*(long **)(lVar1 + 0x188),puVar3);
    }
    lVar4 = lVar4 + 1;
    puVar3 = puVar3 + 8;
  } while (lVar4 != 0x10);
  return 0;
}

