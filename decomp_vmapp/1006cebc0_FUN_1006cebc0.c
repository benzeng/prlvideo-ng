
undefined1 FUN_1006cebc0(CBaseNode *param_1)

{
  long lVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined1 uVar5;
  int iVar6;
  long lVar7;
  QArrayData *local_150;
  QArrayData *local_148;
  QArrayData *local_140;
  undefined1 local_138 [8];
  uint *local_130 [3];
  QArrayData *local_118;
  CParallelsNetworkConfig local_110 [223];
  undefined1 local_31;
  
  CParallelsNetworkConfig::CParallelsNetworkConfig(local_110);
  CBaseNode::toString(SUB81(&local_118,0),SUB81(param_1,0));
  CBaseNode::fromString
            ((CBaseNode *)local_110,(QTypedArrayData<unsigned_short> *)&local_118,false,
             (QString *)0x0,(int *)0x0,(int *)0x0);
  if (*(int *)local_118 != -1) {
    if (*(int *)local_118 != 0) {
      LOCK();
      *(int *)local_118 = *(int *)local_118 + -1;
      local_31 = *(int *)local_118 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006cec49;
    }
    QArrayData::deallocate(local_118,2,8);
  }
LAB_1006cec49:
  cVar3 = FUN_1006cea80();
  if (cVar3 == '\0') {
    uVar5 = 0;
    goto LAB_1006cefc4;
  }
  local_140 = (QArrayData *)QString::fromAscii_helper("",0);
  FUN_1006d2560(local_138,&local_140);
  if (*(int *)local_140 != -1) {
    if (*(int *)local_140 != 0) {
      LOCK();
      *(int *)local_140 = *(int *)local_140 + -1;
      local_31 = *(int *)local_140 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006cecb4;
    }
    QArrayData::deallocate(local_140,2,8);
  }
LAB_1006cecb4:
  FUN_1006e3ea0(&local_148);
  cVar3 = FUN_1006d2310(local_138,&local_148);
  if (*(int *)local_148 != -1) {
    if (*(int *)local_148 != 0) {
      LOCK();
      *(int *)local_148 = *(int *)local_148 + -1;
      local_31 = *(int *)local_148 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006ced0b;
    }
    QArrayData::deallocate(local_148,2,8);
  }
LAB_1006ced0b:
  bVar2 = true;
  if (cVar3 != '\0') {
    bVar2 = false;
    if (0 < (int)local_130[0][1]) {
      if (1 < *local_130[0]) {
        if ((local_130[0][2] & 0x7fffffff) == 0) {
          local_130[0] = (uint *)QArrayData::allocate(8,8,0,2);
        }
        else {
          FUN_1006d0870(local_130,local_130[0][1],local_130[0][2] & 0x7fffffff,0);
        }
      }
      lVar7 = *(long *)((long)local_130[0] + *(long *)(local_130[0] + 4));
      bVar2 = false;
      if (lVar7 != 0) {
        iVar6 = 0;
        do {
          lVar1 = *(long *)(lVar7 + 8);
          iVar4 = QString::compare_helper
                            (*(long *)(lVar1 + 0x10) + lVar1,*(undefined4 *)(lVar1 + 4),"tcp");
          if (iVar4 == 0) {
LAB_1006cee50:
            FUN_1006cf120(lVar7,local_110);
            iVar6 = iVar6 + 1;
          }
          else {
            lVar1 = *(long *)(lVar7 + 8);
            iVar4 = QString::compare_helper
                              (*(long *)(lVar1 + 0x10) + lVar1,*(undefined4 *)(lVar1 + 4),"udp");
            if (iVar4 == 0) goto LAB_1006cee50;
            cVar3 = FUN_1006d00e0(lVar7,local_110,0);
            bVar2 = true;
            if (((cVar3 == '\0') || (iVar4 = iVar6 + 1, iVar4 < 0)) ||
               ((int)local_130[0][1] <= iVar4)) break;
            if (1 < *local_130[0]) {
              if ((local_130[0][2] & 0x7fffffff) == 0) {
                local_130[0] = (uint *)QArrayData::allocate(8,8,0,2);
              }
              else {
                FUN_1006d0870(local_130,local_130[0][1],local_130[0][2] & 0x7fffffff,0);
              }
            }
            lVar7 = *(long *)((long)local_130[0] + (long)iVar4 * 8 + *(long *)(local_130[0] + 4));
            if ((lVar7 == 0) || (cVar3 = FUN_1006d00e0(lVar7,local_110,1), cVar3 == '\0')) break;
            iVar6 = iVar6 + 2;
          }
          bVar2 = false;
          if ((iVar6 < 0) || ((int)local_130[0][1] <= iVar6)) break;
          if (1 < *local_130[0]) {
            if ((local_130[0][2] & 0x7fffffff) == 0) {
              local_130[0] = (uint *)QArrayData::allocate(8,8,0,2);
            }
            else {
              FUN_1006d0870(local_130,local_130[0][1],local_130[0][2] & 0x7fffffff,0);
            }
          }
          lVar7 = *(long *)((long)local_130[0] + (long)iVar6 * 8 + *(long *)(local_130[0] + 4));
          if (lVar7 == 0) break;
        } while( true );
      }
    }
  }
  FUN_1006d2920(local_138);
  if (bVar2) {
    uVar5 = 0;
  }
  else {
    CBaseNode::toString(SUB81(&local_150,0),SUB81(local_110,0));
    CBaseNode::fromString
              (param_1,(QTypedArrayData<unsigned_short> *)&local_150,false,(QString *)0x0,(int *)0x0
               ,(int *)0x0);
    uVar5 = 1;
    if (*(int *)local_150 != -1) {
      if (*(int *)local_150 != 0) {
        LOCK();
        *(int *)local_150 = *(int *)local_150 + -1;
        local_31 = *(int *)local_150 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1006cefc4;
      }
      QArrayData::deallocate(local_150,2,8);
    }
  }
LAB_1006cefc4:
  CParallelsNetworkConfig::~CParallelsNetworkConfig(local_110);
  return uVar5;
}

