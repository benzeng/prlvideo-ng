
void FUN_1001559a0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 in_R9;
  
  cVar1 = QMetaObject::invokeMethod
                    (param_1,"serverDetected",2,0,0,in_R9,param_2,"SdkHandleWrap",0,0,0,0,0,0,0,0,0,
                     0,0,0,0,0,0,0,0,0);
  if (cVar1 == '\0') {
    FUN_100df99c0("[SERVER_MNG]","prl_client_app",0,"ASSERT( %s ) occured in %s:%d [%s]","invoked",
                  "CServerManager.cpp",499,"processServerSearching");
  }
  return;
}

