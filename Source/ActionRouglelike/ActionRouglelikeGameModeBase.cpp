// Copyright Epic Games, Inc. All Rights Reserved.


#include "ActionRouglelikeGameModeBase.h"
#include "MyActor.h"

void AActionRouglelikeGameModeBase::BeginPlay()
{
	Super::BeginPlay();	// ���ø���Beginplay
	//GetWorld()->SpawnActor<AMyActor>(); // ͨ��GameMode�е�GetWorld������UWorld���󴴽�Actor����
	MyActor = GetWorld()->SpawnActor(AMyActor::StaticClass()); // ͨ�����䶯̬��������
   //if (myActor) myActor->Destroy();
}

void AActionRouglelikeGameModeBase::SelfDestoryActor()
{
	//if(MyActor) MyActor->SetLifeSpan(1.5);
	//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("TEST"),true,FVector2D(5,5));
	//UE_LOG(LogTemp, Log, TEXT("ok"));

	//const char* test = "helloworld";
	//TCHAR* tmp = ANSI_TO_TCHAR(test);	// TCHAR��UE�еĴ�ͳ�ַ���
	//UE_LOG(LogTemp, Log, TEXT("%s"), tmp);

	//UE_LOG(LogTemp, Log, TEXT("i am %d years old, height is %f cm, come from %s"), FMath::RandRange(0, 100),
	//	FMath::FRandRange(100, 200), TEXT("����"));
}

void AActionRouglelikeGameModeBase::FunString()
{
	// FString
	FString s1 = TEXT("a");	// UE�е���ͨ�ַ�����Ҫʹ��TEXT��ȥ����
	FString s2(TEXT("b"));
	GEngine->AddOnScreenDebugMessage(-1, 10, FColor::Blue, s1);
	UE_LOG(LogTemp, Log, TEXT("%s"), *s2);	// * ��������ؽ������ַ���תΪ��ͨ�ַ���

	s1 = FString::FromInt(60); // intתString
	UE_LOG(LogTemp, Log, TEXT("%s"), *s1);
	s2 = FString::SanitizeFloat(1.234);// float תstring
	UE_LOG(LogTemp, Log, TEXT("%s"), *s2);
	FVector v1(1.2f, 2.3f, 3.4f);
	UE_LOG(LogTemp, Log, TEXT("%s"), *v1.ToString());

	s1 = TEXT("60");
	int32 num = FCString::Atoi(*s1);	// stringתint
	UE_LOG(LogTemp, Log, TEXT("%d"), num);

	s1 = TEXT("1.23");
	auto FNum = FCString::Atof(*s1);
	UE_LOG(LogTemp, Log, TEXT("%f"), FNum);

	s1 = FString::Printf(TEXT("i am jack, %d year old"), num);	// ����printf���и�ʽ��
	UE_LOG(LogTemp, Log, TEXT("%s"), *s1);

	s1 = TEXT("abcdefg");
	s2 = TEXT("abc");
	UE_LOG(LogTemp, Log, TEXT("%s"), s1.Contains(s2) ? TEXT("Have") : TEXT("No have"));

	// ��λ�Ӵ� s1.Find()
	// �Ƚ��ַ��� s1 == s2�� ������ ==������s1.Equals(s2)
	// ·���ָ��� s1 / s2�� ���ڷָ�·��
	// ƴ���ַ��� s1 += s2 ,s1 + s2
	// �滻�ַ��� s2.Replace()

	/*FString FilePath = FPaths::ProjectDir() / TEXT("UECPP.uproect");
	FString Data;
	FFileHelper::LoadFileToString(Data, *FilePath);*/

	//s1 = TEXT("abc,cde,ef");
	//FString left, right;
	//s1.Split(TEXT(","), &left, &right);	// ֻ���зֳ�����
	//UE_LOG(LogTemp,Log, TEXT("%s %s"),*left,*right);

	//while(s1.Split(TEXT(","),&left,&right))
	//{
	//	UE_LOG(LogTemp, Log, TEXT("%s"), *left);
	//}

	// �����ַ���API
	TArray<FString> OutStr;
	s1.ParseIntoArray(OutStr, TEXT(","));
	for (auto str : OutStr) UE_LOG(LogTemp, Log, TEXT("%s"), *str);
}

void AActionRouglelikeGameModeBase::FunName()
{
	// FName���ڴ洢�ʲ����ƣ����ڹ�ϣ����ѯ�ٶȿ�
	FName n1 = TEXT("name1");
	FName n2 = TEXT("name2");

	// UE_LOG��ӡ
	UE_LOG(LogTemp, Log, TEXT("%s"), *n1.ToString());

	// �Ƚ�FName n1 == n2

}

#define LOCTEXT_NAMESPACE "UECPP"
void AActionRouglelikeGameModeBase::FunText()
{
	//����FText
	FText t1 = NSLOCTEXT("UECPP", "K1", "V1");
	UE_LOG(LogTemp, Log, TEXT("%s"), *t1.ToString());

	FText t2 = LOCTEXT("k2", "v2");
	UE_LOG(LogTemp, Log, TEXT("%s"), *t2.ToString());

}

#undef LOCTEXT_NAMESPACE