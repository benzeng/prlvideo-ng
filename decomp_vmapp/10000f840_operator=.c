
/* CBaseNode::TEMPNAMEPLACEHOLDERVALUE(CBaseNode const&) */

CBaseNode * __thiscall CBaseNode::operator=(CBaseNode *this,CBaseNode *param_1)

{
  int iVar1;
  int *piVar2;
  QMapNodeBase *pQVar3;
  long lVar4;
  int *piVar5;
  ulong *puVar6;
  long lVar7;
  undefined8 *puVar8;
  QDomNode local_58 [8];
  QDomNode local_50 [8];
  QDomDocument local_48 [8];
  int *local_40;
  undefined1 local_31;
  
  if (this == param_1) {
    return this;
  }
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  QString::operator=((QString *)(this + 0x10),(QString *)(param_1 + 0x10));
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  QString::operator=((QString *)(this + 0x28),(QString *)(param_1 + 0x28));
  QString::operator=((QString *)(this + 0x30),(QString *)(param_1 + 0x30));
  piVar5 = *(int **)(param_1 + 0x38);
  if (*(int **)(this + 0x38) != piVar5) {
    local_40 = piVar5;
    if (*piVar5 != -1) {
      if (*piVar5 == 0) {
        QListData::detach((int)&local_40);
        iVar1 = local_40[2];
        if (iVar1 != local_40[3]) {
          puVar8 = (undefined8 *)
                   (*(long *)(param_1 + 0x38) + 0x10 +
                   (long)*(int *)(*(long *)(param_1 + 0x38) + 8) * 8);
          piVar5 = local_40 + (long)iVar1 * 2 + 4;
          lVar4 = (long)local_40[3] * 8 + (long)iVar1 * -8;
          do {
            piVar2 = (int *)*puVar8;
            *(int **)piVar5 = piVar2;
            if (1 < *piVar2 + 1U) {
              LOCK();
              *piVar2 = *piVar2 + 1;
              local_31 = *piVar2 != 0;
              UNLOCK();
            }
            piVar5 = piVar5 + 2;
            puVar8 = puVar8 + 1;
            lVar4 = lVar4 + -8;
          } while (lVar4 != 0);
        }
      }
      else {
        LOCK();
        *piVar5 = *piVar5 + 1;
        local_31 = *piVar5 != 0;
        UNLOCK();
      }
    }
    piVar5 = *(int **)(this + 0x38);
    *(int **)(this + 0x38) = local_40;
    local_40 = piVar5;
    FUN_100013180(&local_40);
  }
  QString::operator=((QString *)(this + 0x40),(QString *)(param_1 + 0x40));
  QString::operator=((QString *)(this + 0x48),(QString *)(param_1 + 0x48));
  piVar5 = *(int **)(param_1 + 0x50);
  if (*(int **)(this + 0x50) != piVar5) {
    if (*piVar5 == 0) {
      piVar5 = (int *)QMapDataBase::createData();
      if (*(long *)(*(long *)(param_1 + 0x50) + 0x10) != 0) {
        puVar6 = (ulong *)FUN_1000137b0(*(long *)(*(long *)(param_1 + 0x50) + 0x10),piVar5);
        *(ulong **)(piVar5 + 4) = puVar6;
        *puVar6 = *puVar6 & 3 | (ulong)(piVar5 + 2);
        QMapDataBase::recalcMostLeftNode();
      }
    }
    else if (*piVar5 != -1) {
      LOCK();
      *piVar5 = *piVar5 + 1;
      UNLOCK();
      local_40 = (int *)CONCAT71(local_40._1_7_,*piVar5 != 0);
      piVar5 = *(int **)(param_1 + 0x50);
    }
    pQVar3 = *(QMapNodeBase **)(this + 0x50);
    *(int **)(this + 0x50) = piVar5;
    if (*(int *)pQVar3 != -1) {
      if (*(int *)pQVar3 != 0) {
        LOCK();
        *(int *)pQVar3 = *(int *)pQVar3 + -1;
        UNLOCK();
        local_40 = (int *)CONCAT71(local_40._1_7_,*(int *)pQVar3 != 0);
        if (*(int *)pQVar3 != 0) goto LAB_10000fa27;
      }
      if (*(long *)(pQVar3 + 0x10) != 0) {
        FUN_100013720();
        QMapDataBase::freeTree(pQVar3,(int)*(undefined8 *)(pQVar3 + 0x10));
      }
      QMapDataBase::freeData((QMapDataBase *)pQVar3);
    }
  }
LAB_10000fa27:
  *(undefined4 *)(this + 0x58) = *(undefined4 *)(param_1 + 0x58);
  piVar5 = *(int **)(param_1 + 0x60);
  if (*(int **)(this + 0x60) != piVar5) {
    if (*piVar5 == 0) {
      piVar5 = (int *)QMapDataBase::createData();
      if (*(long *)(*(long *)(param_1 + 0x60) + 0x10) != 0) {
        puVar6 = (ulong *)FUN_100013890(*(long *)(*(long *)(param_1 + 0x60) + 0x10),piVar5);
        *(ulong **)(piVar5 + 4) = puVar6;
        *puVar6 = *puVar6 & 3 | (ulong)(piVar5 + 2);
        QMapDataBase::recalcMostLeftNode();
      }
    }
    else if (*piVar5 != -1) {
      LOCK();
      *piVar5 = *piVar5 + 1;
      UNLOCK();
      local_40 = (int *)CONCAT71(local_40._1_7_,*piVar5 != 0);
      piVar5 = *(int **)(param_1 + 0x60);
    }
    pQVar3 = *(QMapNodeBase **)(this + 0x60);
    *(int **)(this + 0x60) = piVar5;
    if (*(int *)pQVar3 != -1) {
      if (*(int *)pQVar3 != 0) {
        LOCK();
        *(int *)pQVar3 = *(int *)pQVar3 + -1;
        UNLOCK();
        local_40 = (int *)CONCAT71(local_40._1_7_,*(int *)pQVar3 != 0);
        if (*(int *)pQVar3 != 0) goto LAB_10000fae2;
      }
      if (*(long *)(pQVar3 + 0x10) != 0) {
        FUN_1000136c0();
        QMapDataBase::freeTree(pQVar3,(int)*(undefined8 *)(pQVar3 + 0x10));
      }
      QMapDataBase::freeData((QMapDataBase *)pQVar3);
    }
  }
LAB_10000fae2:
  this[0x68] = param_1[0x68];
  QString::operator=((QString *)(this + 0x70),(QString *)(param_1 + 0x70));
  this[0x90] = param_1[0x90];
  FUN_100012ee0();
  QDomDocument::QDomDocument(local_48);
  QDomDocument::operator=((QDomDocument *)(this + 0x80),local_48);
  QDomDocument::~QDomDocument(local_48);
  lVar4 = *(long *)(param_1 + 0x88);
  if ((*(long *)(lVar4 + 0x10) != 0) && (lVar7 = *(long *)(lVar4 + 0x20), lVar7 != lVar4 + 8)) {
    do {
      QDomDocument::importNode(local_58,SUB81((QDomDocument *)(this + 0x80),0));
      QDomNode::toElement();
      FUN_100013060(this + 0x88,lVar7 + 0x18,local_50);
      QDomNode::~QDomNode(local_50);
      QDomNode::~QDomNode(local_58);
      lVar7 = QMapNodeBase::nextNode();
    } while (lVar7 != *(long *)(param_1 + 0x88) + 8);
  }
  return this;
}

