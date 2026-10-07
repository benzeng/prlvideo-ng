
bool FUN_10075a5d0(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  char cVar4;
  uint *puVar5;
  long lVar6;
  ulong uVar7;
  uint *puVar8;
  bool bVar9;
  
  uVar7 = *(ulong *)(param_4 + 0x20);
  puVar5 = operator_new__(uVar7,(nothrow_t *)PTR_nothrow_100ba21c8);
  if (puVar5 == (uint *)0x0) {
    bVar9 = false;
    FUN_1008e3970("","dbgdump",0,"Failed to allocate memory for notes");
  }
  else {
    cVar4 = FUN_100756dc0(param_2,puVar5,uVar7,*(undefined8 *)(param_4 + 8));
    if (cVar4 == '\0') {
      FUN_1008e3970("","dbgdump",0,"Couldn\'t read pheader");
    }
    else {
      uVar7 = 0;
      if (*(long *)(param_4 + 0x20) != 0) {
        uVar7 = 0;
        puVar8 = puVar5;
        do {
          if (2 < DAT_1011b55f8) {
            FUN_1008e3970("","dbgdump",3,"note %s @%p of type 0x%x, namesz %d, descsz %d",puVar8 + 3
                          ,puVar8,puVar8[2],*puVar8,puVar8[1]);
          }
          if (puVar8[2] == 1) {
            lVar2 = *(long *)(param_3 + 0x10);
            lVar6 = uVar7 * 0x768;
            *(uint *)(lVar2 + 0x5b8 + lVar6) = puVar8[0xd] - 1;
            *(undefined2 *)(lVar2 + 0x222 + lVar6) = 1;
            *(undefined8 *)(lVar2 + 0x30 + lVar6) = *(undefined8 *)(puVar8 + 0x29);
            *(undefined8 *)(lVar2 + 0x20 + lVar6) = *(undefined8 *)(puVar8 + 0x2b);
            *(short *)(lVar2 + 0x5f1 + lVar6) = (short)puVar8[0x43];
            uVar3 = *(undefined8 *)(puVar8 + 0x37);
            puVar1 = (undefined8 *)(lVar2 + 8 + lVar6);
            *puVar1 = *(undefined8 *)(puVar8 + 0x35);
            puVar1[1] = uVar3;
            *(short *)(lVar2 + 0x651 + lVar6) = (short)puVar8[0x4f];
            *(undefined8 *)(lVar2 + 0x18 + lVar6) = *(undefined8 *)(puVar8 + 0x39);
            *(short *)(lVar2 + 0x5c1 + lVar6) = (short)puVar8[0x51];
            *(undefined8 *)(lVar2 + 0x88 + lVar6) = *(undefined8 *)(puVar8 + 0x45);
            *(short *)(lVar2 + 0x681 + lVar6) = (short)puVar8[0x53];
            *(short *)(lVar2 + 0x6b1 + lVar6) = (short)puVar8[0x55];
            *(undefined8 *)(lVar2 + lVar6) = *(undefined8 *)(puVar8 + 0x41);
            uVar3 = *(undefined8 *)(puVar8 + 0x3d);
            puVar1 = (undefined8 *)(lVar2 + 0x38 + lVar6);
            *puVar1 = *(undefined8 *)(puVar8 + 0x3b);
            puVar1[1] = uVar3;
            *(undefined8 *)(lVar2 + 0x28 + lVar6) = *(undefined8 *)(puVar8 + 0x47);
            *(short *)(lVar2 + 0x621 + lVar6) = (short)puVar8[0x49];
            _memcpy((void *)(lVar2 + 0x274 + lVar6),puVar8 + 0x5e,0x340);
            *(undefined8 *)(lVar2 + 0x48 + lVar6) = *(undefined8 *)(puVar8 + 0x33);
            *(undefined8 *)(lVar2 + 0x50 + lVar6) = *(undefined8 *)(puVar8 + 0x31);
            *(undefined8 *)(lVar2 + 0x58 + lVar6) = *(undefined8 *)(puVar8 + 0x2f);
            *(undefined8 *)(lVar2 + 0x60 + lVar6) = *(undefined8 *)(puVar8 + 0x2d);
            *(undefined8 *)(lVar2 + 0x68 + lVar6) = *(undefined8 *)(puVar8 + 0x27);
            *(undefined8 *)(lVar2 + 0x70 + lVar6) = *(undefined8 *)(puVar8 + 0x25);
            *(undefined8 *)(lVar2 + 0x78 + lVar6) = *(undefined8 *)(puVar8 + 0x23);
            *(undefined8 *)(lVar2 + 0x80 + lVar6) = *(undefined8 *)(puVar8 + 0x21);
            *(undefined2 *)(lVar2 + 0x220 + lVar6) = 0x40;
            FUN_1008e3970("","dbgdump",0,"Filled VCPU[%d] context",uVar7);
            uVar7 = (ulong)((int)uVar7 + 1);
          }
          puVar8 = (uint *)(((long)(((long)puVar8 +
                                     ((ulong)((long)((long)puVar8 + (ulong)*puVar8 + 0xf) >> 0x3f)
                                     >> 0x3e) + 0xf + (ulong)*puVar8 | 3) + (ulong)puVar8[1]) / 4) *
                           4);
        } while ((ulong)((long)puVar8 - (long)puVar5) < *(ulong *)(param_4 + 0x20));
      }
      if (*(int *)(param_3 + 0x18) == 0) {
        *(int *)(param_3 + 0x18) = (int)uVar7;
      }
      else if (*(int *)(param_3 + 0x18) != (int)uVar7) {
        cVar4 = '\0';
        FUN_1008e3970("","dbgdump",0,
                      "VCPU count mismatch (%d in PR_STATUS and %d in extra VCPU state)",uVar7);
      }
    }
    operator_delete__(puVar5);
    bVar9 = cVar4 != '\0';
  }
  return bVar9;
}

