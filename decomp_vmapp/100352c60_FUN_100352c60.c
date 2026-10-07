
void FUN_100352c60(long param_1,uint param_2,byte *param_3,uint param_4,undefined8 param_5,
                  undefined8 param_6)

{
  uint uVar1;
  undefined4 in_EAX;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  undefined8 uVar6;
  
  uVar6 = CONCAT44(param_2,in_EAX);
  puVar5 = *(uint **)(param_1 + 0x138);
  if (puVar5 == *(uint **)(param_1 + 0x140)) {
    FUN_10027f110(param_1 + 0x130,&stack0xffffffffffffffcc);
    puVar5 = *(uint **)(param_1 + 0x138);
  }
  else {
    *puVar5 = param_2;
    puVar5 = puVar5 + 1;
    *(uint **)(param_1 + 0x138) = puVar5;
  }
  FUN_10033f0e0(param_1 + 0x130,puVar5,param_3,param_3 + (ulong)param_4 * 4,param_5,param_6,uVar6);
  uVar1 = *(uint *)(param_1 + 0x100);
  uVar3 = param_2 & 0xffff;
  if (uVar1 < 0xffff0200) {
    if (uVar3 == 0x43) {
LAB_100352d0b:
      *(uint *)(param_1 + 0x104) = *(uint *)(param_1 + 0x104) | 1 << (*param_3 & 0x1f);
LAB_100352d1b:
      uVar4 = uVar3 - 0x42;
      if (uVar4 < 0x1e) goto LAB_100352d23;
    }
    else {
      if (uVar3 != 0x44) {
        if (uVar3 == 0x59) goto LAB_100352d0b;
        goto LAB_100352d1b;
      }
      uVar4 = 1 << (*param_3 & 0x1f);
      *(uint *)(param_1 + 0x104) = *(uint *)(param_1 + 0x104) | uVar4;
      *(uint *)(param_1 + 0x110) = *(uint *)(param_1 + 0x110) | uVar4;
      uVar4 = 2;
LAB_100352d23:
      if ((0x28030d5fU >> (uVar4 & 0x1f) & 1) != 0) {
        *(uint *)(param_1 + 0x10c) = *(uint *)(param_1 + 0x10c) | 1 << (*param_3 & 0x1f);
      }
    }
    if (0xffff0103 < uVar1) goto LAB_100352d76;
    uVar4 = uVar3 - 0x40;
    if (0x1f < uVar4) goto LAB_100352da8;
    if ((0x78379fU >> (uVar4 & 0x1f) & 1) != 0) {
      bVar2 = *param_3;
LAB_100352d69:
      *(uint *)(param_1 + 0x108) = *(uint *)(param_1 + 0x108) | 1 << (bVar2 & 0x1f);
      goto LAB_100352d76;
    }
    if ((0x40060U >> (uVar4 & 0x1f) & 1) != 0) {
      bVar2 = param_3[4];
      goto LAB_100352d69;
    }
    if ((0xa0000000U >> (uVar4 & 0x1f) & 1) == 0) goto LAB_100352da8;
  }
  else {
LAB_100352d76:
    if (((uVar3 != 0x5f) && (uVar3 != 0x5d)) &&
       ((uVar3 != 0x42 || (((param_2 & 0x20000) == 0 || (uVar1 < 0xffff0104))))))
    goto LAB_100352da8;
  }
  *(undefined1 *)(param_1 + 0x114) = 1;
LAB_100352da8:
  FUN_10039fdf0(param_1,param_2,param_3,param_4);
  return;
}

