
/* Function Stack Size: 0x18 bytes */

bool CVideoDataAVF_objc::isModeSupported_secondValue_
               (ID param_1,SEL param_2,unsigned_int param_3,unsigned_int param_4)

{
  long *plVar1;
  QMap<unsigned_int,_unsigned_int> *pQVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  unsigned_int *puVar6;
  uint uVar7;
  unsigned_int local_24;
  
  pQVar2 = m_modes(param_1,PTR_s_m_modes_100bed4f0);
  lVar4 = *(long *)(pQVar2->field0_0x0 + 0x10);
  lVar3 = 0;
  if (lVar4 == 0) {
    return 0;
  }
  do {
    while (uVar7 = *(uint *)(lVar4 + 0x18), uVar7 < param_3) {
      plVar1 = (long *)(lVar4 + 0x10);
      lVar4 = *plVar1;
      if (*plVar1 == 0) {
        if (lVar3 == 0) {
          return 0;
        }
        uVar7 = *(uint *)(lVar3 + 0x18);
        goto LAB_100255a88;
      }
    }
    plVar1 = (long *)(lVar4 + 8);
    lVar3 = lVar4;
    lVar4 = *plVar1;
  } while (*plVar1 != 0);
LAB_100255a88:
  if (param_3 < uVar7) {
    return 0;
  }
  pQVar2 = m_modes(param_1,PTR_s_m_modes_100bed4f0);
  lVar4 = *(long *)(pQVar2->field0_0x0 + 0x10);
  lVar3 = 0;
  if (*(long *)(pQVar2->field0_0x0 + 0x10) != 0) {
    do {
      while (lVar5 = lVar4, uVar7 = *(uint *)(lVar5 + 0x18), uVar7 < param_3) {
        lVar4 = *(long *)(lVar5 + 0x10);
        if (*(long *)(lVar5 + 0x10) == 0) {
          if (lVar3 == 0) goto LAB_100255aef;
          uVar7 = *(uint *)(lVar3 + 0x18);
          lVar5 = lVar3;
          goto LAB_100255aeb;
        }
      }
      lVar4 = *(long *)(lVar5 + 8);
      lVar3 = lVar5;
    } while (*(long *)(lVar5 + 8) != 0);
LAB_100255aeb:
    if (uVar7 <= param_3) goto LAB_100255af1;
  }
LAB_100255aef:
  lVar5 = 0;
LAB_100255af1:
  puVar6 = &local_24;
  if (lVar5 != 0) {
    puVar6 = (unsigned_int *)(lVar5 + 0x1c);
  }
  return (bool)CONCAT71((int7)((ulong)(lVar5 + 0x1c) >> 8),*puVar6 == param_4);
}

