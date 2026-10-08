
undefined1 FUN_100a5f1c0(long param_1,long *param_2)

{
  long lVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  QArrayData *pQVar7;
  undefined1 uVar8;
  long lVar9;
  bool bVar10;
  QArrayData *local_40;
  undefined1 local_31;
  
  uVar8 = 0;
  lVar4 = _TISCreateInputSourceList(0,0);
  if (lVar4 != 0) {
    lVar5 = _CFArrayGetCount(lVar4);
    if (lVar5 < 1) {
      _CFRelease(lVar4);
      uVar8 = 0;
    }
    else {
      bVar10 = false;
      lVar9 = 0;
      do {
        uVar6 = _CFArrayGetValueAtIndex(lVar4,lVar9);
        FUN_100a61530(&local_40,uVar6);
        pQVar7 = local_40;
        iVar3 = *(int *)(local_40 + 4);
        bVar2 = 1;
        if ((((long)iVar3 != 0) && (lVar1 = *param_2, iVar3 == *(int *)(lVar1 + 4))) &&
           (iVar3 = _memcmp(local_40 + *(long *)(local_40 + 0x10),
                            (void *)(lVar1 + *(long *)(lVar1 + 0x10)),(long)iVar3), iVar3 == 0)) {
          iVar3 = _TISSelectInputSource(uVar6);
          bVar10 = iVar3 == 0;
          bVar2 = 0;
          pQVar7 = local_40;
        }
        if (*(int *)pQVar7 != -1) {
          if (*(int *)pQVar7 != 0) {
            LOCK();
            *(int *)pQVar7 = *(int *)pQVar7 + -1;
            local_31 = *(int *)pQVar7 != 0;
            UNLOCK();
            pQVar7 = local_40;
            if ((bool)local_31) goto LAB_100a5f2c3;
          }
          QArrayData::deallocate(pQVar7,1,8);
        }
LAB_100a5f2c3:
        lVar9 = lVar9 + 1;
      } while ((bool)(lVar9 < lVar5 & bVar2));
      _CFRelease(lVar4);
      if (bVar10) {
        FUN_1000ee480(param_1 + 0x10,param_2);
        uVar8 = 1;
      }
      else {
        uVar8 = 0;
      }
    }
  }
  return uVar8;
}

