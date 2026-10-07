
void FUN_1000bcde0(void)

{
  undefined8 in_R9;
  
  FUN_1008e3970("","vm",0,"Terminating VM Process ...");
  QCoreApplication::flush();
  QCoreApplication::processEvents(0);
  QMetaObject::invokeMethod
            (*(undefined8 *)PTR_self_100ba2100,"quit",2,0,0,in_R9,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
             0,0,0);
  return;
}

