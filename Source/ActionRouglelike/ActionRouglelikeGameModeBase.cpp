// Copyright Epic Games, Inc. All Rights Reserved.


#include "ActionRouglelikeGameModeBase.h"
#include "MyActor.h"

void AActionRouglelikeGameModeBase::BeginPlay()
{
	Super::BeginPlay();	// 调用父类Beginplay
	//GetWorld()->SpawnActor<AMyActor>(); // 通过GameMode中的GetWorld创建的UWorld对象创建Actor对象
	MyActor = GetWorld()->SpawnActor(AMyActor::StaticClass()); // 通过反射动态创建对象
   //if (myActor) myActor->Destroy();
}

void AActionRouglelikeGameModeBase::SelfDestoryActor()
{
	//if(MyActor) MyActor->SetLifeSpan(1.5);
	//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("TEST"),true,FVector2D(5,5));
	//UE_LOG(LogTemp, Log, TEXT("ok"));

	//const char* test = "helloworld";
	//TCHAR* tmp = ANSI_TO_TCHAR(test);	// TCHAR是UE中的传统字符串
	//UE_LOG(LogTemp, Log, TEXT("%s"), tmp);

	//UE_LOG(LogTemp, Log, TEXT("i am %d years old, height is %f cm, come from %s"), FMath::RandRange(0, 100),
	//	FMath::FRandRange(100, 200), TEXT("北京"));
}

void AActionRouglelikeGameModeBase::FunString()
{
	// FString
	FString s1 = TEXT("a");	// UE中的普通字符串需要使用TEXT宏去创建
	FString s2(TEXT("b"));
	GEngine->AddOnScreenDebugMessage(-1, 10, FColor::Blue, s1);
	UE_LOG(LogTemp, Log, TEXT("%s"), *s2);	// * 运算符重载将对象字符串转为普通字符串

	s1 = FString::FromInt(60); // int转String
	UE_LOG(LogTemp, Log, TEXT("%s"), *s1);
	s2 = FString::SanitizeFloat(1.234);// float 转string
	UE_LOG(LogTemp, Log, TEXT("%s"), *s2);
	FVector v1(1.2f, 2.3f, 3.4f);
	UE_LOG(LogTemp, Log, TEXT("%s"), *v1.ToString());

	s1 = TEXT("60");
	int32 num = FCString::Atoi(*s1);	// string转int
	UE_LOG(LogTemp, Log, TEXT("%d"), num);

	s1 = TEXT("1.23");
	auto FNum = FCString::Atof(*s1);
	UE_LOG(LogTemp, Log, TEXT("%f"), FNum);

	s1 = FString::Printf(TEXT("i am jack, %d year old"), num);	// 借助printf进行格式化
	UE_LOG(LogTemp, Log, TEXT("%s"), *s1);

	s1 = TEXT("abcdefg");
	s2 = TEXT("abc");
	UE_LOG(LogTemp, Log, TEXT("%s"), s1.Contains(s2) ? TEXT("Have") : TEXT("No have"));

	// 定位子串 s1.Find()
	// 比较字符串 s1 == s2， 重载了 ==，或者s1.Equals(s2)
	// 路径分隔符 s1 / s2， 用于分割路径
	// 拼接字符串 s1 += s2 ,s1 + s2
	// 替换字符串 s2.Replace()

	/*FString FilePath = FPaths::ProjectDir() / TEXT("UECPP.uproect");
	FString Data;
	FFileHelper::LoadFileToString(Data, *FilePath);*/

	//s1 = TEXT("abc,cde,ef");
	//FString left, right;
	//s1.Split(TEXT(","), &left, &right);	// 只能切分成两段
	//UE_LOG(LogTemp,Log, TEXT("%s %s"),*left,*right);

	//while(s1.Split(TEXT(","),&left,&right))
	//{
	//	UE_LOG(LogTemp, Log, TEXT("%s"), *left);
	//}

	// 裁切字符串API
	TArray<FString> OutStr;
	s1.ParseIntoArray(OutStr, TEXT(","));
	for (auto str : OutStr) UE_LOG(LogTemp, Log, TEXT("%s"), *str);
}

void AActionRouglelikeGameModeBase::FunName()
{
	// FName用于存储资产名称，基于哈希，查询速度快
	FName n1 = TEXT("name1");
	FName n2 = TEXT("name2");

	// UE_LOG打印
	UE_LOG(LogTemp, Log, TEXT("%s"), *n1.ToString());

	// 比较FName n1 == n2

}

#define LOCTEXT_NAMESPACE "UECPP"
void AActionRouglelikeGameModeBase::FunText()
{
	//创建FText
	FText t1 = NSLOCTEXT("UECPP", "K1", "V1");
	UE_LOG(LogTemp, Log, TEXT("%s"), *t1.ToString());

	FText t2 = LOCTEXT("k2", "v2");
	UE_LOG(LogTemp, Log, TEXT("%s"), *t2.ToString());

}

#undef LOCTEXT_NAMESPACE