
void FUN_10031de60(long param_1,int param_2,uint param_3)

{
  int iVar1;
  char *pcVar2;
  undefined *puVar3;
  ulong *puVar4;
  long lVar5;
  QMapNodeBase *pQVar6;
  bool bVar7;
  QMapNodeBase *local_58;
  QVariant local_48;
  undefined1 local_31;
  
  FUN_10031da20();
  if (((param_2 == 0x30000001) || ((param_2 == 0x30000004 && (param_3 == 0x3000000b)))) &&
     (iVar1 = *(int *)(param_1 + 0x58), iVar1 != 0)) {
    *(undefined4 *)(param_1 + 0x58) = 0;
    FUN_100df99c0("","prl_client_app",0,"Tools installation stage changed from [%d] to [%d]",iVar1,0
                 );
    FUN_10082a090(param_1,0,iVar1);
  }
  bVar7 = false;
  switch(param_2) {
  case 0x30000001:
  case 0x30000009:
    FUN_100319d50(param_1);
    if (param_2 != 0x30000004) {
      bVar7 = false;
      goto switchD_10031def8_caseD_30000002;
    }
    break;
  default:
    goto switchD_10031def8_caseD_30000002;
  case 0x30000004:
    FUN_100318cf0(param_1);
    FUN_10031e150(param_1);
    break;
  case 0x30000005:
    if ((param_3 | 8) == 0x3000000c) {
      bVar7 = false;
    }
    else {
      FUN_100318cf0(param_1);
      bVar7 = false;
    }
    goto switchD_10031def8_caseD_30000002;
  }
  bVar7 = param_3 == 0x30000010 || param_3 == 0x30000003;
switchD_10031def8_caseD_30000002:
  local_58 = *(QMapNodeBase **)(param_1 + 0x48);
  if (*(int *)local_58 == 0) {
    local_58 = (QMapNodeBase *)QMapDataBase::createData();
    lVar5 = *(long *)(*(long *)(param_1 + 0x48) + 0x10);
    if (lVar5 != 0) {
      puVar4 = (ulong *)FUN_1000340b0(lVar5,local_58);
      *(ulong **)(local_58 + 0x10) = puVar4;
      *puVar4 = *puVar4 & 3 | (ulong)(local_58 + 8);
      QMapDataBase::recalcMostLeftNode();
    }
  }
  else if (*(int *)local_58 != -1) {
    LOCK();
    *(int *)local_58 = *(int *)local_58 + 1;
    local_31 = *(int *)local_58 != 0;
    UNLOCK();
    local_58 = *(QMapNodeBase **)(param_1 + 0x48);
  }
  if (*(long *)(local_58 + 0x10) != 0) {
    pQVar6 = *(QMapNodeBase **)(local_58 + 0x20);
    if (pQVar6 != local_58 + 8) {
      do {
        if ((((*(long *)(pQVar6 + 0x20) != 0) && (*(int *)(*(long *)(pQVar6 + 0x20) + 4) != 0)) &&
            (pcVar2 = *(char **)(pQVar6 + 0x28), pcVar2 != (char *)0x0)) &&
           (lVar5 = FUN_100323e30(pcVar2,0),
           puVar3 = PTR_s_DynProp_SkipFitGuestOnDynResAvai_102270ea0, lVar5 != 0)) {
          QVariant::QVariant(&local_48,bVar7);
          QObject::setProperty(pcVar2,(QVariant *)puVar3);
          QVariant::~QVariant(&local_48);
        }
        pQVar6 = (QMapNodeBase *)QMapNodeBase::nextNode();
      } while (pQVar6 != local_58 + 8);
    }
  }
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) {
        return;
      }
    }
    if (*(long *)(local_58 + 0x10) != 0) {
      FUN_100034170();
      QMapDataBase::freeTree(local_58,(int)*(undefined8 *)(local_58 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)local_58);
  }
  return;
}

