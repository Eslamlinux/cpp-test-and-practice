import asyncio

async def func():
    print("Hi")
    await asyncio.sleep(1)
    print("Man")

asyncio.run(func())