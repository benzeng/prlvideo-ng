
void FUN_10007a670(QObject *param_1)

{
  char cVar1;
  void *pvVar2;
  ID IVar3;
  _Unwind_Exception *exception_object;
  undefined8 extraout_RAX;
  char local_40 [24];
  char *local_28;
  
  QObject::QObject(param_1,(QObject *)0x0);
  *(undefined ***)param_1 = &PTR_FUN_10222f080;
  pvVar2 = operator_new(0x40);
  FUN_100079640(pvVar2,param_1);
  *(void **)(param_1 + 0x10) = pvVar2;
  cVar1 = FUN_100075300();
  if (cVar1 != '\0') {
    cVar1 = MacUtils::addInstanceMethod
                      ("QNSWindowDelegate","CWindowRestoration","window:willEncodeRestorableState:")
    ;
    if (cVar1 == '\0') {
      local_40[0] = '\x02';
      local_40[1] = '\0';
      local_40[2] = '\0';
      local_40[3] = '\0';
      local_40[0x14] = '\0';
      local_40[0x15] = '\0';
      local_40[0x16] = '\0';
      local_40[0x17] = '\0';
      local_40[0xc] = '\0';
      local_40[0xd] = '\0';
      local_40[0xe] = '\0';
      local_40[0xf] = '\0';
      local_40[0x10] = '\0';
      local_40[0x11] = '\0';
      local_40[0x12] = '\0';
      local_40[0x13] = '\0';
      local_40[4] = '\0';
      local_40[5] = '\0';
      local_40[6] = '\0';
      local_40[7] = '\0';
      local_40[8] = '\0';
      local_40[9] = '\0';
      local_40[10] = '\0';
      local_40[0xb] = '\0';
      local_28 = "default";
      exception_object =
           (_Unwind_Exception *)
           QMessageLogger::fatal
                     (local_40,"Failed to replace window:willEncodeRestorableState: method!");
      QObject::~QObject(param_1);
      __Unwind_Resume(exception_object);
      FUN_100014b50(extraout_RAX);
      FUN_10007a670();
      return;
    }
    IVar3 = CRestorationSharedData::sharedInstance
                      ((ID)PTR_CRestorationSharedData_10226aa30,PTR_s_sharedInstance_102269e90);
    CRestorationSharedData::setManager_
              (IVar3,PTR_s_setManager__102269e88,*(CAppResumeManagerPrivate **)(param_1 + 0x10));
    QObject::installEventFilter(*(QObject **)PTR_self_1021e1388);
  }
  return;
}

