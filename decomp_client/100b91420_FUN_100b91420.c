
int FUN_100b91420(long *param_1,undefined8 param_2)

{
  QMapNodeBase *pQVar1;
  int iVar2;
  long *plVar3;
  int unaff_R13D;
  QMapNodeBase *local_40;
  undefined1 local_32;
  
  plVar3 = param_1;
  do {
    plVar3 = (long *)*plVar3;
    if (plVar3 == param_1) {
      return 0;
    }
    FUN_100b91b20(plVar3);
    local_40 = (QMapNodeBase *)PTR_shared_null_1021e12f0;
    iVar2 = FUN_100b91c30(plVar3,param_2,&local_40);
    pQVar1 = local_40;
    if (iVar2 != 0) {
      unaff_R13D = iVar2;
    }
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_32 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_32) goto LAB_100b914c4;
      }
      if (*(long *)(local_40 + 0x10) != 0) {
        FUN_10012a490();
        QMapDataBase::freeTree(pQVar1,(int)*(undefined8 *)(pQVar1 + 0x10));
      }
      QMapDataBase::freeData((QMapDataBase *)pQVar1);
    }
LAB_100b914c4:
    if (iVar2 != 0) {
      return unaff_R13D;
    }
  } while( true );
}

