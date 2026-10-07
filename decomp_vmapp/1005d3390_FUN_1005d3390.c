
void FUN_1005d3390(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  QDomNode *local_60;
  QDomNode local_58 [8];
  QArrayData *local_50;
  QArrayData *local_48;
  QString local_40;
  undefined1 local_31;
  
  QDomDocument::createElement(&local_40);
  lVar2 = *param_2;
  uVar3 = (ulong)*(uint *)(lVar2 + 8);
  if ((int)*(uint *)(lVar2 + 8) < *(int *)(lVar2 + 0xc)) {
    lVar4 = 0;
    do {
      uVar1 = *(undefined8 *)(lVar2 + 0x10 + ((int)uVar3 + lVar4) * 8);
      local_48 = (QArrayData *)QString::fromAscii_helper("GUID",4);
      FUN_1007d6a70(&local_50,uVar1);
      FUN_1005ba3b0(param_1,&local_48,&local_50,&local_40,param_5,param_6,param_4);
      if (*(int *)local_50 != -1) {
        if (*(int *)local_50 != 0) {
          LOCK();
          *(int *)local_50 = *(int *)local_50 + -1;
          local_31 = *(int *)local_50 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1005d344e;
        }
        QArrayData::deallocate(local_50,2,8);
      }
LAB_1005d344e:
      if (*(int *)local_48 != -1) {
        if (*(int *)local_48 != 0) {
          LOCK();
          *(int *)local_48 = *(int *)local_48 + -1;
          local_31 = *(int *)local_48 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1005d347e;
        }
        QArrayData::deallocate(local_48,2,8);
      }
LAB_1005d347e:
      lVar4 = lVar4 + 1;
      lVar2 = *param_2;
      uVar3 = (ulong)*(int *)(lVar2 + 8);
    } while (lVar4 < (long)((long)*(int *)(lVar2 + 0xc) - uVar3));
  }
  local_60 = (QDomNode *)&local_40;
  QDomNode::appendChild(local_58);
  QDomNode::~QDomNode(local_58);
  QDomNode::~QDomNode(local_60);
  return;
}

