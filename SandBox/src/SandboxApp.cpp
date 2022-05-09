#include "AutoSimulate.h"

class ExampleLayer : public AutoSimulate::Layer
{
public:
	ExampleLayer()
		: Layer("Example")
	{
	}

	void OnUpdate() override
	{
		HZ_INFO("ExampleLayer::Update");
	}

	void OnEvent(AutoSimulate::Event& event) override
	{
		HZ_TRACE("{0}", event);
	}

};

class Sandbox : public AutoSimulate::Application
{
public:
	Sandbox()
	{
		PushLayer(new ExampleLayer());
	}

	~Sandbox()
	{

	}

};

AutoSimulate::Application* AutoSimulate::CreateApplication()
{
	return new Sandbox();
}