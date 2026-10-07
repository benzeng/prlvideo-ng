
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_10075a2a0(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined1 auVar2 [16];
  char cVar3;
  uint *puVar4;
  long lVar5;
  ulong uVar6;
  uint *puVar7;
  bool bVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  
  uVar6 = *(ulong *)(param_4 + 0x20);
  puVar4 = operator_new__(uVar6,(nothrow_t *)PTR_nothrow_100ba21c8);
  if (puVar4 == (uint *)0x0) {
    bVar8 = false;
    FUN_1008e3970("","dbgdump",0,"Failed to allocate memory for notes");
  }
  else {
    cVar3 = FUN_100756dc0(param_2,puVar4,uVar6,*(undefined8 *)(param_4 + 8));
    if (cVar3 == '\0') {
      FUN_1008e3970("","dbgdump",0,"Couldn\'t read pheader");
    }
    else {
      uVar6 = 0;
      if (*(long *)(param_4 + 0x20) != 0) {
        uVar6 = 0;
        puVar7 = puVar4;
        do {
          if (2 < DAT_1011b55f8) {
            FUN_1008e3970("","dbgdump",3,"note %s @%p of type 0x%x, namesz %d, descsz %d",puVar7 + 3
                          ,puVar7,puVar7[2],*puVar7,puVar7[1]);
          }
          if (puVar7[2] == 1) {
            lVar1 = *(long *)(param_3 + 0x10);
            lVar5 = uVar6 * 0x768;
            *(uint *)(lVar1 + 0x5b8 + lVar5) = puVar7[0xb] - 1;
            *(undefined2 *)(lVar1 + 0x222 + lVar5) = 1;
            *(ulong *)(lVar1 + 8 + lVar5) = (ulong)puVar7[0x1d];
            *(ulong *)(lVar1 + 0x30 + lVar5) = (ulong)puVar7[0x1c];
            *(ulong *)(lVar1 + 0x20 + lVar5) = (ulong)puVar7[0x17];
            *(short *)(lVar1 + 0x5f1 + lVar5) = (short)puVar7[0x24];
            *(short *)(lVar1 + 0x651 + lVar5) = (short)puVar7[0x1e];
            auVar2 = _DAT_100b41630;
            auVar9._8_4_ = (int)((ulong)*(undefined8 *)(puVar7 + 0x18) >> 0x20);
            auVar9._0_8_ = *(undefined8 *)(puVar7 + 0x18);
            auVar9._12_4_ = 0;
            *(undefined1 (*) [16])(lVar1 + 0x10 + lVar5) = auVar9 & _DAT_100b41630;
            *(short *)(lVar1 + 0x5c1 + lVar5) = (short)puVar7[0x1f];
            *(ulong *)(lVar1 + 0x88 + lVar5) = (ulong)puVar7[0x25];
            *(short *)(lVar1 + 0x681 + lVar5) = (short)puVar7[0x20];
            *(short *)(lVar1 + 0x6b1 + lVar5) = (short)puVar7[0x21];
            *(ulong *)(lVar1 + lVar5) = (ulong)puVar7[0x23];
            auVar10._8_4_ = (int)((ulong)*(undefined8 *)(puVar7 + 0x1a) >> 0x20);
            auVar10._0_8_ = *(undefined8 *)(puVar7 + 0x1a);
            auVar10._12_4_ = 0;
            *(undefined1 (*) [16])(lVar1 + 0x38 + lVar5) = auVar10 & auVar2;
            *(ulong *)(lVar1 + 0x28 + lVar5) = (ulong)puVar7[0x26];
            *(short *)(lVar1 + 0x621 + lVar5) = (short)puVar7[0x27];
            _memcpy((void *)(lVar1 + 0x274 + lVar5),puVar7 + 0x2e,0x340);
            *(undefined2 *)(lVar1 + 0x220 + lVar5) = 0x20;
            FUN_1008e3970("","dbgdump",0,"Filled VCPU[%d] context",uVar6);
            uVar6 = (ulong)((int)uVar6 + 1);
          }
          puVar7 = (uint *)(((long)(((long)puVar7 +
                                     ((ulong)((long)((long)puVar7 + (ulong)*puVar7 + 0xf) >> 0x3f)
                                     >> 0x3e) + 0xf + (ulong)*puVar7 | 3) + (ulong)puVar7[1]) / 4) *
                           4);
        } while ((ulong)((long)puVar7 - (long)puVar4) < *(ulong *)(param_4 + 0x20));
      }
      if (*(int *)(param_3 + 0x18) == 0) {
        *(int *)(param_3 + 0x18) = (int)uVar6;
      }
      else if (*(int *)(param_3 + 0x18) != (int)uVar6) {
        cVar3 = '\0';
        FUN_1008e3970("","dbgdump",0,
                      "VCPU count mismatch (%d in PR_STATUS and %d in extra VCPU state)",uVar6);
      }
    }
    operator_delete__(puVar4);
    bVar8 = cVar3 != '\0';
  }
  return bVar8;
}

