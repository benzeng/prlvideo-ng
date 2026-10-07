
undefined8 FUN_1000ed430(int param_1)

{
  long lVar1;
  undefined4 *puVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  if ((DAT_1011b6d60 == (undefined4 *)0x0) || (DAT_1011b6d40 == 0)) {
    uVar4 = 0;
    FUN_1008e3970("","vm",0,"Invalid custom data state");
  }
  else if (DAT_1011b6d78 == '\0') {
    if ((int)DAT_1011c37a0 != 0) {
      FUN_1008e3970("","vm",0,"%s: start saving",*(undefined8 *)(DAT_1011b6d40 + 0x2c));
    }
    puVar2 = DAT_1011b6d60;
    DAT_1011b6d6c = 0;
    DAT_1011b6d78 = '\x01';
    lVar3 = (ulong)(param_1 + 2) * 0x10;
    DAT_1011b6d60[2] = (int)lVar3;
    *puVar2 = 0;
    puVar2[1] = 0x8a9ffffa;
    lVar1 = DAT_1011b6d50;
    uVar5 = (ulong)(uint)puVar2[3];
    if ((ulong)DAT_1011b6d58 < uVar5 + lVar3) {
      uVar4 = 0;
      FUN_1008e3970("","vm",0,"Ptr is out of range. Item %s (%p,0x%zx,%p,0x%x)",
                    *(undefined8 *)(DAT_1011b6d40 + 0x2c),uVar5 + DAT_1011b6d50,lVar3,DAT_1011b6d50,
                    DAT_1011b6d58);
    }
    else {
      *(undefined4 *)(DAT_1011b6d50 + uVar5) = 0;
      *(undefined4 *)(lVar1 + 4 + uVar5) = 0x8a9ffffd;
      *(int *)(lVar1 + 0xc + uVar5) = param_1 << 4;
      *(undefined4 *)(lVar1 + 8 + uVar5) = 0;
      uVar4 = 1;
      if (param_1 != 0) {
        *(undefined4 *)(uVar5 + 0x1c + lVar1) = DAT_1011b6d60[2] + DAT_1011b6d60[3];
      }
    }
  }
  else {
    uVar4 = 0;
    FUN_1008e3970("","vm",0,"Nested custom systems are not supported. Item %s 0x%x, line=%u",
                  *(undefined8 *)(DAT_1011b6d40 + 0x2c),DAT_1011b6d60[1],0x561);
  }
  return uVar4;
}

