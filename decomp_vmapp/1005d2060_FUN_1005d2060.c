
int FUN_1005d2060(undefined8 param_1,undefined8 *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  long lVar5;
  long lVar6;
  QDomNode local_98 [8];
  QDomNode local_90 [8];
  QArrayData *local_88;
  QString local_80;
  QArrayData *local_78;
  QString local_70;
  QArrayData *local_68;
  undefined1 local_59;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  int local_40;
  long local_38;
  
  lVar6 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_38 = lVar6;
  local_68 = (QArrayData *)QString::fromAscii_helper("BackupLocations",0xf);
  iVar2 = FUN_1005b9950(param_1,&local_68);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_59 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_59) goto LAB_1005d20df;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_1005d20df:
  if (iVar2 < 0) goto LAB_1005d2418;
  puVar4 = (uint *)*param_2;
  if (1 < *puVar4) {
    if ((puVar4[2] & 0x7fffffff) == 0) {
      puVar4 = (uint *)QArrayData::allocate(0x20,8,0,2);
      *param_2 = puVar4;
    }
    else {
      FUN_1005fc970(param_2,puVar4[1],puVar4[2] & 0x7fffffff,0);
      puVar4 = (uint *)*param_2;
    }
  }
  lVar5 = (long)puVar4 + *(long *)(puVar4 + 4);
  if (1 < *puVar4) {
    if ((puVar4[2] & 0x7fffffff) == 0) {
      puVar4 = (uint *)QArrayData::allocate(0x20,8,0,2);
      *param_2 = puVar4;
    }
    else {
      FUN_1005fc970(param_2,puVar4[1],puVar4[2] & 0x7fffffff,0);
      puVar4 = (uint *)*param_2;
    }
  }
  if (lVar5 != (long)puVar4 + (long)(int)puVar4[1] * 0x20 + *(long *)(puVar4 + 4)) {
    do {
      FUN_1007ea1f0(lVar5);
      *(undefined8 *)(lVar5 + 0x10) = 0;
      *(undefined4 *)(lVar5 + 0x18) = 0xffffffff;
      puVar4 = (uint *)*param_2;
      if (1 < *puVar4) {
        if ((puVar4[2] & 0x7fffffff) == 0) {
          puVar4 = (uint *)QArrayData::allocate(0x20,8,0,2);
          *param_2 = puVar4;
        }
        else {
          FUN_1005fc970(param_2,puVar4[1],puVar4[2] & 0x7fffffff,0);
          puVar4 = (uint *)*param_2;
        }
      }
      lVar5 = lVar5 + 0x20;
    } while (lVar5 != (long)puVar4 + (long)(int)puVar4[1] * 0x20 + *(long *)(puVar4 + 4));
  }
  QMutex::lock();
  local_78 = (QArrayData *)QString::fromAscii_helper("BackupLocations",0xf);
  QDomNode::firstChildElement(&local_70);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_59 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_59) goto LAB_1005d227b;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_1005d227b:
  cVar1 = QDomNode::isNull();
  iVar2 = -0x7ffdd000;
  if (cVar1 == '\0') {
    local_88 = (QArrayData *)QString::fromAscii_helper("Location",8);
    QDomElement::elementsByTagName(&local_80);
    if (*(int *)local_88 != -1) {
      if (*(int *)local_88 != 0) {
        LOCK();
        *(int *)local_88 = *(int *)local_88 + -1;
        local_59 = *(int *)local_88 != 0;
        UNLOCK();
        if ((bool)local_59) goto LAB_1005d22e7;
      }
      QArrayData::deallocate(local_88,2,8);
    }
LAB_1005d22e7:
    iVar2 = 0;
    while( true ) {
      iVar3 = QDomNodeList::length();
      if (iVar3 <= iVar2) break;
      QDomNodeList::item((int)local_98);
      QDomNode::toElement();
      FUN_1005d2570(&local_58,param_1,local_90);
      QDomNode::~QDomNode(local_90);
      QDomNode::~QDomNode(local_98);
      lVar6 = (long)local_40;
      puVar4 = (uint *)*param_2;
      if (1 < *puVar4) {
        if ((puVar4[2] & 0x7fffffff) == 0) {
          puVar4 = (uint *)QArrayData::allocate(0x20,8,0,2);
          *param_2 = puVar4;
        }
        else {
          FUN_1005fc970(param_2,puVar4[1],puVar4[2] & 0x7fffffff,0);
          puVar4 = (uint *)*param_2;
        }
      }
      lVar5 = *(long *)(puVar4 + 4);
      lVar6 = lVar6 * 0x20;
      *(int *)((long)puVar4 + lVar6 + 0x18 + lVar5) = local_40;
      *(undefined8 *)((long)puVar4 + lVar6 + 0x10 + lVar5) = local_48;
      *(undefined8 *)((long)puVar4 + lVar6 + 8 + lVar5) = local_50;
      *(undefined8 *)((long)puVar4 + lVar6 + lVar5) = local_58;
      iVar2 = iVar2 + 1;
    }
    iVar2 = 0;
    QDomNodeList::~QDomNodeList((QDomNodeList *)&local_80);
    lVar6 = *(long *)PTR____stack_chk_guard_100ba2320;
  }
  QDomNode::~QDomNode((QDomNode *)&local_70);
  QMutex::unlock();
LAB_1005d2418:
  if (lVar6 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar2;
}

