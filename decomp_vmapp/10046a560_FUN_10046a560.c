
undefined8 FUN_10046a560(long *param_1,long *param_2)

{
  long lVar1;
  undefined8 uVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  int iVar8;
  
  FUN_1008e3970("","OTGDispatcher",0,"[begin] Open Tools Gate self test #2");
  lVar7 = *param_1;
  lVar1 = *(long *)(lVar7 + 0x10);
  iVar5 = *(int *)(lVar7 + 4) + -0x10;
  FUN_1008e3970("","OTGDispatcher",0,"\tinput data size: declared=%u, real=%i",
                *(undefined4 *)(lVar1 + 0xc + lVar7),iVar5);
  uVar2 = 0xfffffff8;
  if (iVar5 == *(int *)(lVar1 + 0xc + lVar7)) {
    if (0 < iVar5) {
      lVar7 = 0;
      do {
        lVar1 = (long)(int)lVar7 * 0x80808081;
        iVar4 = (int)(char)((char)lVar7 +
                           ((char)(uint)((ulong)lVar1 >> 0x27) - (char)(lVar1 >> 0x3f)));
        iVar8 = (int)*(char *)(*(long *)(*param_1 + 0x10) + 0x10 + *param_1 + lVar7);
        if (iVar4 != iVar8) {
          FUN_1008e3970("","OTGDispatcher",0,"\tinvalid char at pos %i: %i must be %i",lVar7,iVar8,
                        iVar4);
          return 0xfffffff9;
        }
        lVar7 = lVar7 + 1;
      } while (lVar7 < iVar5);
    }
    QByteArray::resize((int)param_2);
    puVar3 = (uint *)*param_2;
    uVar6 = (ulong)puVar3[1];
    uVar2 = 0;
    if (0 < (int)puVar3[1]) {
      lVar7 = 0;
      do {
        lVar1 = (long)(int)(lVar7 + 0x11) * 0x80808081;
        if (lVar7 < (int)uVar6) {
          if ((1 < *puVar3) || (*(long *)(puVar3 + 4) != 0x18)) {
            QByteArray::reallocData(param_2,(int)uVar6 + 1,puVar3[2] >> 0x1f);
          }
        }
        else {
          QByteArray::expand((int)param_2);
        }
        *(char *)(lVar7 + *param_2 + *(long *)(*param_2 + 0x10)) =
             (char)(lVar7 + 0x11) + ((char)(uint)((ulong)lVar1 >> 0x27) - (char)(lVar1 >> 0x3f));
        lVar7 = lVar7 + 1;
        puVar3 = (uint *)*param_2;
        uVar6 = (ulong)(int)puVar3[1];
        uVar2 = 0;
      } while (lVar7 < (long)uVar6);
    }
  }
  return uVar2;
}

