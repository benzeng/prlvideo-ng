
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10020e630(long param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  QObject *pQVar5;
  int *piVar6;
  int *piVar7;
  Connection local_30 [13];
  undefined1 local_23;
  undefined1 local_22;
  undefined1 local_21;
  
  if (DAT_1023121a8 == '\0') {
    iVar2 = ___cxa_guard_acquire(&DAT_1023121a8);
    if (iVar2 != 0) {
      _DAT_1023121a0 = QString::fromAscii_helper("{564820fc-e265-4d69-9fb0-3d18396f1f8d}",0x26);
      ___cxa_atexit(FUN_100054e40,&DAT_1023121a0,0x100000000);
      ___cxa_guard_release(&DAT_1023121a8);
    }
  }
  if (((*(long *)(param_1 + 0x18) != 0) && (*(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) &&
     (*(long *)(param_1 + 0x20) != 0)) {
    lVar3 = FUN_10018d490();
    if (lVar3 != 0) {
      lVar3 = FUN_10015a330(lVar3);
      if (lVar3 != 0) {
        CDispCommonPreferences::getWorkspacePreferences();
        cVar1 = CDispWorkspacePreferences::isPluginsAllowed();
        if (cVar1 != '\0') {
          CAbstractTask::setWaitForSubTaskCompletion();
          uVar4 = 0;
          if ((*(long *)(param_1 + 0x18) != 0) &&
             (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
            uVar4 = *(undefined8 *)(param_1 + 0x20);
          }
          uVar4 = FUN_10018d490(uVar4);
          pQVar5 = (QObject *)FUN_100175fa0(uVar4,&DAT_1023121a0);
          piVar6 = (int *)0x0;
          if (pQVar5 != (QObject *)0x0) {
            piVar6 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar5);
          }
          piVar7 = *(int **)(param_1 + 0x68);
          if (piVar7 != piVar6) {
            if (piVar6 != (int *)0x0) {
              LOCK();
              *piVar6 = *piVar6 + 1;
              local_23 = *piVar6 != 0;
              UNLOCK();
              piVar7 = *(int **)(param_1 + 0x68);
            }
            if (piVar7 != (int *)0x0) {
              LOCK();
              *piVar7 = *piVar7 + -1;
              local_22 = *piVar7 != 0;
              UNLOCK();
              if ((!(bool)local_22) && (*(void **)(param_1 + 0x68) != (void *)0x0)) {
                operator_delete(*(void **)(param_1 + 0x68));
              }
            }
            *(int **)(param_1 + 0x68) = piVar6;
            *(QObject **)(param_1 + 0x70) = pQVar5;
          }
          if (piVar6 != (int *)0x0) {
            LOCK();
            *piVar6 = *piVar6 + -1;
            local_21 = *piVar6 != 0;
            UNLOCK();
            if (!(bool)local_21) {
              operator_delete(piVar6);
            }
          }
          uVar4 = 0;
          if ((*(long *)(param_1 + 0x68) != 0) &&
             (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x68) + 4) != 0)) {
            uVar4 = *(undefined8 *)(param_1 + 0x70);
          }
          QObject::connect(local_30,uVar4,"2jobCompleted(PRL_RESULT)",param_1,
                           "1onGetPluginsListCompleted(PRL_RESULT)",0);
          QMetaObject::Connection::~Connection(local_30);
        }
      }
    }
  }
  return 0;
}

